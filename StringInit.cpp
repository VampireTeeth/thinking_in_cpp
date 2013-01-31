/*
 * =====================================================================================
 *
 *       Filename:  StringInit.cpp
 *
 *    Description:  Demostration of initialization of c++ strings
 *
 *        Version:  1.0
 *        Created:  31/01/2013 20:26:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <string>
#include <iostream>
using namespace std;

int main() {
  string imBlank;
  string heyMom("Where are my socks?");
  string standardReply = "Beamed into deep "
    "space on wide angle dispersion?";
  string useThisOneAgain(standardReply);

  cout << imBlank << endl;
  cout << heyMom << endl;
  cout << standardReply << endl;
  cout << useThisOneAgain << endl;

  string s1("What is the sound of one clam napping?");
  string s2("Anything worth doing is worth overdoing.");
  string s3("I saw Elvis in a UFO.");

  string s4(s1, 0, 8);
  string s5(s2, 15, 6);
  string s6(s3, 6, 15);
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  cout << s5 << endl;
  cout << s6 << endl;
  
  string quoteMe = s4 + "that" +
    s1.substr(20, 10) + s5 +
    "with" + s3.substr(5, 100) +
    s1.substr(37 ,1);

  cout << quoteMe << endl;
}
