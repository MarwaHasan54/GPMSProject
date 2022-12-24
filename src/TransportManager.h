/*
 * TransportManager.h
 *
 *  Created on: 14 Dec 2022
 *      Author: smaha
 */

#ifndef TRANSPORTMANAGER_H_
#define TRANSPORTMANAGER_H_

#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
//#define PORT 8080

class TransportManager {
public:
	TransportManager();
	virtual ~TransportManager();
	/*sets the IP and the Port values*/
	void init();
	/*starts a connection*/
	void start();

	//void readFile(ifstream cFile);

	//Communication c = new TCP ---> TCP :: Communication
};

#endif /* TRANSPORTMANAGER_H_ */
