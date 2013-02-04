#include <vector>
#include <iostream>
using namespace std;

class shape{
public:
  virtual void draw() = 0;
  virtual ~shape(){}
};


class circle : public shape {
public:
  void draw(){cout << "circle::draw"<<endl;}
  ~circle(){cout << "circle::~circle()" << endl;}
};

class triangle : public shape {
public:
  void draw(){cout << "triangle::draw"<<endl;}
  ~triangle(){cout << "triangle::~triangle()" << endl;}
};

class square : public shape {
public:
  void draw(){cout << "square::draw"<<endl;}
  ~square(){cout << "square::~square()" << endl;}
};


typedef vector<shape*> container;
typedef container::iterator iter;

int main() {
  container shapes;

  shapes.push_back(new circle());
  shapes.push_back(new triangle());
  shapes.push_back(new square());

  for(iter i = shapes.begin(); i!=shapes.end(); i++){
    (*i)->draw();
  }

  for(iter i = shapes.begin(); i!=shapes.end(); i++){
    delete (*i);
  }
  return 0;
}
