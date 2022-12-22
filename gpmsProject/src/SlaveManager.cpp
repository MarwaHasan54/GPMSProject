/*
 * SlaveManager.cpp
 *
 *  Created on: 14 Dec 2022
 *      Author: smaha
 */

#include "SlaveManager.h"
#include "Logic.h"


SlaveManager::SlaveManager() {
	// TODO Auto-generated constructor stub

}

SlaveManager::~SlaveManager() {
	// TODO Auto-generated destructor stub
}

/*NEEDS TO BE UPDATED*/
void SlaveManager::handleMSG(char s[], int len){
	Logic* logic = new Logic();
	printf( "MY MSG SLAVE :%x\n",s);
	logic->logicMsg(s, len);
	//return s;

}
