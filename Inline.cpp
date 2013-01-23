/*
 * =====================================================================================
 *
 *       Filename:  Inline.cpp
 *
 *    Description:  Demostration of inline functions inside class definition
 *
 *        Version:  1.0
 *        Created:  01/23/2013 20:48:41
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

class Point{
    int i, j, k;

public:
    Point(){i = j = k = 0;}
    Point(int I, int J, int K){
        i = I;
        j = J;
        k = K;
    }

    void print(const char* msg = "") const{
        if(*msg) cout << msg << endl;
        cout << "i = " << i << ", "
            << "j = " << j << ", "
            << "k = " << k << endl;
    }
};


int main() {
    Point p, q(1,2,3);
    p.print("Value of p");
    q.print("Value of q");
}
