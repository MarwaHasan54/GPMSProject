/*
 * tcp.h
 *
 *  Created on: 21 Dec 2022
 *      Author: marwa
 */

#ifndef TCP_H_
#define TCP_H_

class tcp {
public:
	int port;
	tcp(int port);
	virtual ~tcp();
	void start();
};

#endif /* TCP_H_ */
