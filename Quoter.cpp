/*
 * =====================================================================================
 *
 *       Filename:  Quoter.cpp
 *
 *    Description:  Demostration of const objects and const member functions
 *
 *        Version:  1.0
 *        Created:  01/22/2013 22:28:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Quoter{
    int lastquote;
public:
    Quoter();
    int Lastquote() const;
    const char* quote();
};

Quoter::Quoter(){
    lastquote = -1;
    srand(time(0));
}

int Quoter::Lastquote() const {
    return lastquote;
}

const char* Quoter::quote(){
    static const char* quotes[] = {
        "Are we having fun yet?",
        "Doctors always know best",
        "Is it ... Atomic?",
        "Fear is obscene",
        "There is no scientific evidence ",
        "to support the idea ",
        "that life is serious",
        };
    const int qsize = sizeof(quotes) / sizeof(*quotes);
    int qnum = rand() % qsize;
    while(lastquote >= 0 && qnum == lastquote) {
        qnum = rand() % qsize;
    }
    return quotes[lastquote = qnum];
}

int main(){
    Quoter q;
    const Quoter cq;
    q.Lastquote();
    cq.Lastquote();
    for(int i = 0; i < 10; i++){
        cout << q.quote() << endl; 
    }
    //cq.quote(); // Illegal: passing const object as this argument of non-const member function

}
