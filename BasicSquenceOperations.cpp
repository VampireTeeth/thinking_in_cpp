#include <iostream>
#include <vector>
#include <deque>
#include <list>
using namespace std;

template<class ContainerOfUnit>
void print(ContainerOfUnit& c, const char* s = ""){
  cout << s << ":" << endl;
  if(c.empty()){
    cout << "(empty)" << endl;
    return;
  }
  
  typename ContainerOfUnit::iterator it;
  
  for(it = c.begin(); it != c.end(); it++){
    cout << *it << " ";
  }

  cout << endl;

  cout << "size() " << c.size()
       << " max_size() " << c.max_size()
       << " front() " << c.front()
       << " back() " << c.back() << endl;
}


template<class ContainerOfUnit>
void basicOps(const char* s){
  cout << "----------" << s << "----------" << endl;
  typedef ContainerOfUnit COU;
  COU c;
  print(c, "c after default constructor");
  COU c1(10, 1);
  print(c1, "c1 after constructor(10, 1)");
  int ia[] = {1, 3, 5, 7, 9};
  const int iasz = sizeof(ia) / sizeof(*ia);
  COU c2(ia, ia+iasz);
  print(c2, "c2 after constructor(iter, iter)");
  COU c3(c2);
  print(c3, "c3 after copy constructor from c2");
  c = c1;
  print(c, "c after being c = c1");
  c.assign(10, 2);
  print(c, "c after c.assign(10, 2)");
  c.assign(ia, ia+iasz);
  print(c, "c after assign(iter, iter)");
  // typename COU::reverse_iterator rit = c.rbegin();
  // while(rit!=c.rend()){
  //   cout << *rit++ << " ";
  // }
  cout << endl;
  c.resize(4);
  print(c, "c after resize(4)");
  c.push_back(47);
  print(c, "c after c.push_back(47)");
  c.pop_back();
  print(c, "c after c.pop_back()");
  typename COU::iterator it = c.begin();
  it++;it++;
  c.insert(it, 74);
  print(c, "c after it++; it++; c.insert(iter, 74)");
  it = c.begin();
  it++;
  c.insert(it, 3, 96);
  print(c, "c after c.insert(iter, 3, 96)");
  it = c.begin();
  it++;
  c.insert(it, c2.begin(), c2.end());
  print(c, "c after c.insert(it, c2.begin(), c2.end())");

  it = c.begin();
  it++;
  c.erase(it);
  print(c, "c after c.erase(iter)");
  typename COU::iterator it2 = it = c.begin();
  it++;
  for(int i = 0; i < 5; i++){
    it2++;
  }

  c.erase(it, it2);
  print(c, "c after c.erase(it, it2)");
  c.swap(c2);
  print(c, "c after c.swap(c2)");
  c.clear();
  print(c, "c after c.clear()");
}


int main(){
  basicOps<vector<int> >("Vector");
  basicOps<deque<int> >("Deque");
  basicOps<list<int> >("List");
  return 0;
}
