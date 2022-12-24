//============================================================================
// Name        : mygpms.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// IP          : 192.168.246.129
//============================================================================

#include <iostream>
#include "TransportManager.h"
#include "SlaveManager.h"
#include "Logic.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	TransportManager* transportm =  new TransportManager();
	//SlaveManager slavem;
	//Logic logic;
	transportm->start();
	return 0;
}


