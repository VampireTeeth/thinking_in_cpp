/*
 * =====================================================================================
 *
 *       Filename:  Consttmp.cpp
 *
 *    Description:  Demostration of temporary when pass-by-reference 
 *
 *        Version:  1.0
 *        Created:  01/22/2013 21:37:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu
 *   Organization:  
 *
 * =====================================================================================
 */

class X{

};

X f(){
    return X();
}

void g1(X& x){}
void g2(const X& x){}

int main(){
    //g1(f()); //Illegal: return value of f() is a temporary and is always a const
    g2(f());
}
