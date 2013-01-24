/*
 * =====================================================================================
 *
 *       Filename:  Singleton.cpp
 *
 *    Description:  Demostration of singleton pattern with static member function
 *
 *        Version:  1.0
 *        Created:  24/01/2013 22:18:18
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

class Earth{
    static Earth e;
    int Value;
    Earth(int Value):Value(Value){}
public:
    static Earth* instance() {return &e;}
    int value(){return Value;}
};

Earth Earth::e(47);

int main(){
    cout << Earth::instance()->value() << endl;
}
