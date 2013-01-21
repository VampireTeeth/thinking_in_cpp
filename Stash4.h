/*
 * Stash4.h
 *
 *  Created on: Jan 21, 2013
 *      Author: weikeliu
 */

#ifndef STASH4_H_
#define STASH4_H_

namespace std {

class Stash {
	int size;
	int quantity;
	int next;
	unsigned char* storage;
	void inflate(int increase);
public:
	Stash(int s);
	Stash(int s, int q);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count();
};

} /* namespace std */
#endif /* STASH4_H_ */
