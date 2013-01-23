/*
 * =====================================================================================
 *
 *       Filename:  Hidden.cpp
 *
 *    Description:  Demo of hidden activities of inline constructors and destructors
 *
 *        Version:  1.0
 *        Created:  01/23/2013 21:20:48
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

class Member{
    int i, j, k;
public:
    Member(int x = 0):i(x), j(x), k(x){ cout << "Member()" << endl;}
    ~Member(){ cout << "~Member()" << endl;}
};

class WithMembers{
    Member O, P, Q;
    int i;
public:
    WithMembers(int I) : i(I){ cout << "WithMembers()" << endl;}
    ~WithMembers(){cout << "~WithMembers()" << endl;}
};

int main(){
    WithMembers WM(4);
}
