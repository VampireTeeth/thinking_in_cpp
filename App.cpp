/*
 * Main.cpp
 *
 *  Created on: Jan 17, 2013
 *      Author: weikeliu
 */

#include <iostream>
#include "Definit.h"
#include "Constr.h"
using namespace std;

int main(){
	G g(2);
	cout << "I = " <<g.get()<< endl;
	Tree t(5);
	t.printsize();
	t.grow(1);
	t.printsize();
}

