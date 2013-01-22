/*
 * =====================================================================================
 *
 *       Filename:  SStack.cpp
 *
 *    Description:  Demostration of enum in class
 *
 *        Version:  1.0
 *        Created:  01/22/2013 21:55:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstring>
#include <iostream>
using namespace std;

class StringStack{
    enum{size = 100};
    const char* Stack[size];
    int index;
public:
    StringStack();
    void push(const char* s);
    const char* pop();
};

StringStack::StringStack():index(0){
    memset(Stack, 0, size*sizeof(char*));
}

void StringStack::push(const char* s) {
    if(index < size){
        Stack[index++] = s;
    }
}

const char* StringStack::pop(){
    if(index > 0){
        const char* rv = Stack[--index];
        Stack[index] = 0;
        return rv;
    }
    return 0;
}

const char* IceCream[] = {
        "pralines & cream",
        "fudge ripple",
        "jamocha almond fudge",
        "wild mountain blackberry",
        "raspberry sorbet",
        "lemon swirl",
        "rocky road",
        "deep chocolate fudge"
        };

const int ICsz = sizeof(IceCream) / sizeof(*IceCream);
int main(){
    StringStack SS;
    for(int i = 0; i < ICsz; i++) {
        SS.push(IceCream[i]);
    }
    const char* cp;
    while(cp = SS.pop()){
        cout << cp << endl;
    }
}
