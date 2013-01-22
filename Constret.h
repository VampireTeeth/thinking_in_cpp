/*
 * Constret.h
 *
 *  Created on: Jan 22, 2013
 *      Author: weikeliu
 */

#ifndef CONSTRET_H_
#define CONSTRET_H_

namespace std {

class X {
	int i;
public:
	X(int I);
	virtual ~X();
	void modify();
	int get();
};

const X f5();
X f6();
void f7(X& x);
} /* namespace std */
#endif /* CONSTRET_H_ */
