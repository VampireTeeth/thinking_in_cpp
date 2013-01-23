/*
 * =====================================================================================
 *
 *       Filename:  Noinsitu.cpp
 *
 *    Description:  Demostration of using inline in order to reduce cluttering
 *
 *        Version:  1.0
 *        Created:  01/23/2013 21:27:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdio>
using namespace std;

class Rectangle{
    int Height, Width;

public:
    Rectangle(int W = 0, int H = 0);
    void height(int H);
    int height() const;
    void width(int W);
    int width() const;
    const char* info() const;
};

Rectangle::Rectangle(int W, int H)
    :Width(W), Height(H){}

inline void Rectangle::height(int H){
    Height = H;
}

inline int Rectangle::height() const {
    return Height;
}

inline void Rectangle::width(int W) {
    Width = W;
}

inline int Rectangle::width() const {
    return Width;
}

inline const char* Rectangle::info() const {
    static char v[20];
    sprintf(v, "Width = %d, Height = %d", Width, Height);
    return v;
}

int main(){
    Rectangle R(18, 47);
    cout << R.info() << endl;
    R.width(2 * R.width());
    R.height(2 * R.height());
    cout << R.info() << endl;
}
