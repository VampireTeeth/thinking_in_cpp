/*
 * Stack03.h
 *
 *  Created on: Jan 21, 2013
 *      Author: weikeliu
 */

#ifndef STACK03_H_
#define STACK03_H_

namespace std {

class Stack {
	struct link {
		void* data;
		link* next;
		void initialize(void* data, link* next);
	}* head;
public:
	Stack();
	virtual ~Stack();
	void push(void* data);
	void* peek();
	void* pop();
	void print();
};

} /* namespace std */
#endif /* STACK03_H_ */
