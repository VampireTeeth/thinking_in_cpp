/*
 * Main.cpp
 *
 *  Created on: Jan 17, 2013
 *      Author: weikeliu
 */

#include <iostream>
#include "Definit.h"
#include "Constr.h"
#include "Stack03.h"
#include <cstdlib>
using namespace std;

int main(){
	G g(2);
	cout << "I = " <<g.get()<< endl;
	Tree t(5);
	t.printsize();
	t.grow(1);
	t.printsize();

	cout << "----------------Testing Stack03 Start---------------" <<endl;
	Stack s;
	for(int i = 0; i < 5; i++){
		char* d = (char*)malloc(10*sizeof(char));
		sprintf(d, "data%d", i);
		s.push((char*)d);
	}
	void* d;
	d = s.pop();
	while(d){
		cout << "Data: " <<  (char*)d <<endl;
		d = s.pop();
	}
	cout << "----------------Testing Stack03 End---------------" <<endl;

//	for(int i = 0; i < 5; i++) {
//		int arr[10];
//		for(int j = 0; j < 10;arr[j++]=0);
//		cout << "Array address: " << &arr << endl;
//	}
}

