/*
 * tcp.cpp
 *
 *  Created on: 21 Dec 2022
 *      Author: marwa
 */

#include "tcp.h"
#include "SlaveManager.h"
#include "TransportManager.h"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int port;

tcp::tcp(int port) {
	// TODO Auto-generated constructor stub
	this->port = port;

}

tcp::~tcp() {
	// TODO Auto-generated destructor stub
}
void tcp:: start(){
	cout <<"I GOT HERE"<< endl;
	SlaveManager* slave = new SlaveManager();

	int server_fd, new_socket, valread;
	struct sockaddr_in address;
	int opt = 1;
	int addrlen = sizeof(address);
	char buffer[1024] = { 0 };
	char* hello = "Hello from server";

	// Creating socket file descriptor
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		perror("socket failed");
		exit(EXIT_FAILURE);
	}

	// Forcefully attaching socket to the port 8080
	if (setsockopt(server_fd, SOL_SOCKET,
			SO_REUSEADDR | SO_REUSEPORT, &opt,
			sizeof(opt))) {
		perror("setsockopt");
		exit(EXIT_FAILURE);
	}
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;//change to current ip
	address.sin_port = htons(this->port);//change to port 502

	// Forcefully attaching socket to the port 8080
	if (bind(server_fd, (struct sockaddr*)&address,sizeof(address))< 0) {
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
	if (listen(server_fd, 3) < 0) {
		perror("listen");
		exit(EXIT_FAILURE);
	}


	while (1){
		if ((new_socket= accept(server_fd, (struct sockaddr*)&address,(socklen_t*)&addrlen))
				< 0) {
			perror("accept");
			exit(EXIT_FAILURE);
		}
		while(1){
			valread = read(new_socket, buffer, 1024);


			printf("%x\n", buffer);
			slave->handleMSG(buffer, valread);
			char mybuff [valread*2];
			mybuff[valread*2] = 0;
			for(int j = 0; j < valread; j++)
				sprintf(&mybuff[2*j], "%02X", buffer[j]);
			cout<<mybuff<<endl;
			send(new_socket, hello, strlen(hello), 0);
			printf("Hello message sent\n");
		}
	}
	// closing the connected socket
	close(new_socket);
	// closing the listening socket
	shutdown(server_fd, SHUT_RDWR);

}
