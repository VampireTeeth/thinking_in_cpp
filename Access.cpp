/*
 * =====================================================================================
 *
 *       Filename:  Access.cpp
 *
 *    Description:  Demostration of inlines application on accessor member functions
 *
 *        Version:  1.0
 *        Created:  01/23/2013 20:55:07
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

class Access {
    int i;
public:
    Access(){ i = 0;}
    int read() const {return i;}
    void set(int I) {i = I;}
};

int main(){
    Access a;
    cout << "i = " << a.read() << endl;
    a.set(5);
    cout << "i = " << a.read() << endl;
}

