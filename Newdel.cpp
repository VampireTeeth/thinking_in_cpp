/*
 * =====================================================================================
 *
 *       Filename:  Newdel.cpp
 *
 *    Description:  Demostration of operator new and operator del
 *
 *        Version:  1.0
 *        Created:  26/01/2013 11:24:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

class Tree{
  int height;
public:
  Tree(int height=0);
  ~Tree();
  friend ostream&
    operator<<(ostream& os, const Tree* t);
};

Tree::Tree(int height):height(height){
  cout << "Tree::Tree()" << endl;
}

Tree::~Tree(){
  cout << "Tree::~Tree()" << endl;
}

ostream& operator<<(ostream& os, const Tree* t){
  os << "Tree height is " << t->height << endl;
  return os;
}

int main() {
  Tree* t = new Tree(40);
  cout << t;
  delete t;
}
