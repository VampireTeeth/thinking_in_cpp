/*
 * =====================================================================================
 *
 *       Filename:  Statinit.cpp
 *
 *    Description:  Demostration of declaration and definition of static member of a class
 *
 *        Version:  1.0
 *        Created:  24/01/2013 21:40:50
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


int x = 100;

class WithStatic{
    static int x;
    static int y;
public :
    void print();
};

int WithStatic::x = 1;
int WithStatic::y = x + 1;

inline void WithStatic::print(){
    cout << "WithStatic::x = " << x << endl;
    cout << "WithStatic::y = " << y << endl;
}

int main(){
    WithStatic WS;
    WS.print();
}
