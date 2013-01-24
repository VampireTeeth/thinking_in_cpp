/*
 * =====================================================================================
 *
 *       Filename:  Statdest.cpp
 *
 *    Description:  Demostration of destruction of global objects and static objects
 *
 *        Version:  1.0
 *        Created:  24/01/2013 21:04:53
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

class Obj{
    char c;
public:
    Obj(char c = '\0') : c(c){ cout << "Obj::Obj() for " << c << endl;}
    ~Obj(){cout << "Obj::~Obj() for " << c << endl;}
};

Obj A('A');

void f(){
    static Obj B('B');
}

void g(){
    static Obj C('C');
}

int main(){
    cout << "Inside main()" << endl;
    f();
    //g();
    cout << "Leaving main()" << endl;
}
