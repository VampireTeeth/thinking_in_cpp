/*
 * =====================================================================================
 *
 *       Filename:  StatObjInFunc.cpp
 *
 *    Description:  Demostration of static objects in functions
 *
 *        Version:  1.0
 *        Created:  24/01/2013 20:52:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

class X{
    int i;
public:
    X(int i = 0) : i(i){cout << "X::X(){i=" << i << "}" << endl;}
    ~X(){cout << "X::~X(){i=" << i << "}" << endl;}
};

void f() {
    static X x1(47);
    static X x2;
}

int main(){
    f();
}
