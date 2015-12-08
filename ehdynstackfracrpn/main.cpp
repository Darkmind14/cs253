#include <iostream>
#include <sstream>
#include "dynstack.h"
#include <string>
#define debug

using namespace std;

int main(int argc, char* argv[]) {

  DynStack* mydynsptr = new DynStack();

  double x;
  string s;

  x = 5;
  cout << x << endl;

  mydynsptr->push(x);

  cout << mydynsptr->top() << endl;
  x = 6;

  mydynsptr->push(x);

  cout << mydynsptr->top() << endl;
  cout << mydynsptr->pop() << endl;
  cout << mydynsptr->top() << endl;
  
  getline(cin, s);

  while (s!="") {
    cout << "about to create stream over this string:" << s << endl;

    istringstream sin(s);

    string x;

    sin >> x;

    while (!sin.eof()) {
    
      cout << x << endl;
      sin >> x;
    }

    getline(cin,s);

  }

  delete mydynsptr; 

  return 0;
}
