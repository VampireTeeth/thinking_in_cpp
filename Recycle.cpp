/*
 * =====================================================================================
 *
 *       Filename:  Recycle.cpp
 *
 *    Description:  Demostration of polymophism and containers
 *
 *        Version:  1.0
 *        Created:  30/01/2013 21:43:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Liu (), steven.weike.liu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TStack.h"
using namespace std;

enum TrashType{AluminumT, PaperT, GlassT};
class Trash{
  float _weight;
public:
  Trash(float wt):_weight(wt){
  }
  virtual TrashType type() const = 0;
  virtual const char* name() const = 0;
  virtual float value() const = 0;
  float weight() const {
    return _weight;
  }
  virtual ~Trash(){}
};

class Aluminum : public Trash {
  static float _value;
public:
  Aluminum(float wt):Trash(wt){}
  TrashType type() const {
    return AluminumT;
  }
  const char* name() const {
    return "Aluminum";
  }
  float value() const {
    return _value;
  }
};

float Aluminum::_value = 1.67;

class Paper : public Trash {
  static float _value;
public:
  Paper(float wt):Trash(wt){}
  TrashType type() const {
    return PaperT;
  }
  const char* name() const {
    return "Paper";
  }
  float value() const {
    return _value;
  }
};

float Paper::_value = 0.10;

class Glass : public Trash {
  static float _value;
public:
  Glass(float wt):Trash(wt){}
  TrashType type() const {
    return GlassT;
  }
  const char* name() const {
    return "Glass";
  }
  float value() const {
    return _value;
  }
};

float Glass::_value = 0.23;

void sumValue(ostream& out, const TStack<Trash>& bin) {
  TStackIter<Trash> tally(bin);
  float val = 0;
  while(tally){
    val += tally->weight() * tally->value();
    out << "weight of " << tally->name() << " = " << tally->weight() << endl;
    tally++;
  }
  out << "total value = " << val << endl;
}


int main(){
  srand(time(0));
  TStack<Trash> bin;
  Trash* t;
  for(int i = 0; i < 30; i++) {
    switch(rand() % 3) {
      case 0:
        t = new Aluminum(rand() % 100);
        break;
      case 1:
        t = new Paper(rand()%100);
        break;
      case 2:
        t = new Glass(rand()%100);
        break;
    }
    bin.push(t);
  }

  sumValue(cout, bin);
  TStack<Trash> alumBin;
  TStack<Trash> paperBin;
  TStack<Trash> glassBin;

  while((t = bin.pop())) {
    switch(t->type()){
      case AluminumT:
        alumBin.push(t);
        break;
      case PaperT:
        paperBin.push(t);
        break;
      case GlassT:
        glassBin.push(t);
        break;
    }
  }

  sumValue(cout, alumBin);
  sumValue(cout, paperBin);
  sumValue(cout, glassBin);
}
