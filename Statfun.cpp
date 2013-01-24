/*
 * =====================================================================================
 *
 *       Filename:  Statfun.cpp
 *
 *    Description:  Demostration of static variables in function
 *
 *        Version:  1.0
 *        Created:  24/01/2013 20:38:37
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

char onechar(const char* str = 0) {

    static const char* s;
    if(str){
        s = str;
        return *s;
    }else {
        if(!s){
            cout << "Un-intialized s" << endl;
            return 0;
        }
    }
    if(*s == '\0') {
        return 0;
    }
    return *s++;
}

const char* a = "abcdefghijklmnopqrstuvwxyz";

int main(){
    onechar(a);
    char c;
    while((c = onechar()) != 0) {
        cout << c << endl;
    }
}
