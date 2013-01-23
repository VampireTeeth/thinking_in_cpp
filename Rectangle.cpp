/*
 * =====================================================================================
 *
 *       Filename:  Rectangle.cpp
 *
 *    Description:  Demo of accessor and mutator with inlines
 *
 *        Version:  1.0
 *        Created:  01/23/2013 21:02:10
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

class Rectangle{
    int Width, Height;
public:
    Rectangle(int w, int h):Width(w), Height(h){}

    int width() const { return Width; }
    void width(int w) { Width = w; }

    int height() const { return Height; }
    void height(int h) { Height = h; }
};

int main() {
    Rectangle R(19, 47);
    cout << "Height = " << R.height() << ", Width = " << R.width() << endl;
    R.height(2*R.height());
    R.width(2*R.width());
    cout << "Height = " << R.height() << ", Width = " << R.width() << endl;
}

