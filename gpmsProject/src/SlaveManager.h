/*
 * SlaveManager.h
 *
 *  Created on: 14 Dec 2022
 *      Author: smaha
 */

#ifndef SLAVEMANAGER_H_
#define SLAVEMANAGER_H_
#include <string> // for string class
#include <iostream>
using namespace std;
/*Slave (server)*/
class SlaveManager {
public:
	SlaveManager();
	virtual ~SlaveManager();

	/*takes message as a string and it's length*/
	void handleMSG(char s[], int len);
};

#endif /* SLAVEMANAGER_H_ */
