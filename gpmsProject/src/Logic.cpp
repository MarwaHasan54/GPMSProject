/*
 * Logic.cpp
 *
 *  Created on: 14 Dec 2022
 *      Author: marwa
 */

#include "Logic.h"

Logic::Logic() {
	// TODO Auto-generated constructor stub

}

Logic::~Logic() {
	// TODO Auto-generated destructor stub
}

void Logic::logicMsg(char s[],int len ){

//	char mybuff [len*2];
//		mybuff[len*2] = 0;
//		for(int j = 0; j < len; j++)
//			sprintf(&mybuff[2*j], "%02X", s[j]);
//		cout<<mybuff<<endl;
	printf("logic msg : %x\n", s);

}
