#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main () {
  set<int> intset;
  for(int i = 0; i < 25; i++) {
    for(int j = 0; j < 10; j++) {
      intset.insert(j);
    }
  }

  copy(intset.begin(), intset.end(), 
       ostream_iterator<int>(cout, "\n"));

  return 0;

}
