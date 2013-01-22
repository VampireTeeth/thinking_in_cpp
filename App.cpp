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
#include "Constret.h"
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
	cout << "----------------Testing Constret Start---------------" <<endl;
	X x = f6() = X(1);
	cout << x.get() << endl;
	x = f6();
	x.modify();
	cout << x.get() << endl;
	x = f6();
	f7(x);
	cout << x.get() << endl;
//	f5() = X(1);
	x = f5();
	f7(x);
	cout << x.get() << endl;

	cout << "----------------Testing Constret End---------------" <<endl;

//	for(int i = 0; i < 5; i++) {
//		int arr[10];
//		for(int j = 0; j < 10;arr[j++]=0);
//		cout << "Array address: " << &arr << endl;
//	}

}

