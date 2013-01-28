/*
 * =====================================================================================
 *
 *       Filename:  Wind2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  28/01/2013 16:19:36
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

enum note{middleC, Csharp, cFlat};

class Instrument{
public:
  virtual void play(note) const {
    cout << "Instrument::play(note)" << endl;
  }
};

class Wind : public Instrument{
public:
  void play(note) const {
    cout << "Wind::play(note)" << endl;
  }
};

void tune(Instrument& i) {
  i.play(middleC);
}

int main(){
  Wind flute;
  tune(flute);
}
