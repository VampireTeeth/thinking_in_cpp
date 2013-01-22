/*
 * Constret.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: weikeliu
 */

#include "Constret.h"

namespace std {

X::X(int I = 0) {
	i = I;
}

X::~X() {
}

void X::modify(){
	i++;
}

const X f5(){
	return X();
}

X f6(){
	return X();
}

void f7(X& x){
	x.modify();
}

int X::get(){
	return i;
}
} /* namespace std */
