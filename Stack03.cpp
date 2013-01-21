/*
 * Stack03.cpp
 *
 *  Created on: Jan 21, 2013
 *      Author: weikeliu
 */

#include "require.h"
#include "Stack03.h"
#include <iostream>
using namespace std;

namespace std {

void Stack::link::initialize(void* Data, link* Next) {
	data = Data;
	next = Next;
}

Stack::Stack() {
	head = 0;
}

Stack::~Stack() {
	link* cursor = head;
	while(head) {
		cursor = cursor->next;
		free(head->data);
		free(head);
		head = cursor;
	}
}

void* Stack::peek() {
	if(head == 0) return 0;
	return head->data;
}

void* Stack::pop() {
	if(head == 0) {
		return 0;
	}
	void* res = head->data;
	link* oldhead = head;
	head = head->next;
	free(oldhead);
	return res;
}

void Stack::push(void* data) {
	//Can't use a constructor with malloc
	link* newlink = (link*)malloc(sizeof(link));
	require(newlink);
	newlink->initialize(data, head);
	head = newlink;
}

void Stack::print(){
	for(link* cursor = head; cursor != 0; cursor = head->next) {
		cout << cursor->data << endl;
	}
}
} /* namespace std */
