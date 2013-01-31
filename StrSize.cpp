/*
 * =====================================================================================
 *
 *       Filename:  StrSize.cpp
 *
 *    Description:  Demostration of appending and inserting operations on strings
 *
 *        Version:  1.0
 *        Created:  31/01/2013 20:45:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string bigNews("I saw Elvis on a UFO.");
  cout << bigNews << endl;
  cout << "Size = " << bigNews.size() << endl;
  cout << "Capacity = " << bigNews.capacity() << endl;
  bigNews.insert(1, " thought I");
  cout << bigNews << endl;
  cout << "Size = " << bigNews.size() << endl;
  cout << "Capacity = " << bigNews.capacity() << endl;
  bigNews.reserve(100);
  bigNews.append("I've been working so hard.");
  cout << bigNews << endl;
  cout << "Size = " << bigNews.size() << endl;
  cout << "Capacity = " << bigNews.capacity() << endl;

}
