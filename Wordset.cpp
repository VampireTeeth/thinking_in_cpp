#include <set>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


class A{
  int x;
public:
  A(int x = 0):x(x){}
  ~A(){}
  int val() const {
    return x;
  }
  
};


int main(int argc, char** argv){
  if(argc != 2){
    cerr << "Invalid number of arguments given: require<2> but given <"<<
	 argc <<">" << endl;
    exit(0);
  }

  ifstream in("words.txt");
  string word;
  set<string> words;
  while(in >> word){
    words.insert(word);
  }
  
  copy(words.begin(), words.end(), 
       ostream_iterator<string>(cout, "\n"));
 
  cout << "Total number of word set: " <<
    words.size() << endl;

  A* a = new A(6);
  cout << "The value of a = " << a->val() << endl;
  delete a;
  return 0;
}
