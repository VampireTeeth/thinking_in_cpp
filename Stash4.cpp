/*
 * Stash4.cpp
 *
 *  Created on: Jan 21, 2013
 *      Author: weikeliu
 */

#include <cstdlib>
#include <cstring>
#include <cstdio>
#include "Stash4.h"

namespace std {

Stash::Stash(int s) {
	size = s;
	quantity = 0;
	next = 0;
	storage = 0;
}

Stash::Stash(int s, int q) {
	size = s;
	quantity = 0;
	next = 0;
	storage = 0;
	inflate(q);
}
Stash::~Stash() {
	if(storage) {
		puts("Freeing storage...");
		free(storage);
	}
}

int Stash::add(void* element) {
	if(next >= quantity) {
		inflate(100);
	}
	memcpy(&(storage[next * size]), element, size);
	next++;
	return (next-1);
}

void* Stash::fetch(int index) {
	if(next >= index || index < 0) {
		return 0;
	}
	return &(storage[next*size]);
}

int Stash::count() {
	return next;
}

void Stash::inflate(int increase) {
	void* v = realloc(storage, (increase+quantity) * size);
	storage = v;
	quantity += increase;
}

} /* namespace std */
