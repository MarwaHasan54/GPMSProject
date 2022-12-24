/*
 * Logic.h
 *
 *  Created on: 14 Dec 2022
 *      Author: marwa
 */

#include <iostream>
#ifndef LOGIC_H_
#define LOGIC_H_

using namespace std;

class Logic {
public:
	Logic();
	virtual ~Logic();
	void logicMsg(char s[], int len);
};

#endif /* LOGIC_H_ */
