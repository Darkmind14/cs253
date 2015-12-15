#include <iostream>
#include <sstream>
#include "dynstack.h"
#include "fraction.h"
#include <string>
#define debug

using namespace std;

int main(int argc, char* argv[]) {

  /* DynStack* mydynsptr = new DynStack();

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

  delete mydynsptr; */

  cout << "Do I Exist?" << endl;
  Fraction myfraction = Fraction(3);
  Fraction myfraction2 = Fraction(2);
  Fraction myfraction3 = Fraction(3, 4);
  cout << "Defined Fraction" << endl;
  cout << "Now Print!" << endl;
  cout << myfraction << endl;
  cout << myfraction3 << endl;
  myfraction + myfraction2;
  myfraction - myfraction2;
  myfraction * myfraction2;
  myfraction / myfraction2;
  cout << myfraction.asDouble() << endl;
  cout << myfraction2.asDouble() << endl;
  string s;
  getline(cin, s);

  while (s!="") {
    istringstream sin(s + " ");
    char c;
    sin >> c;
    while (!sin.eof()) {
      switch (c) {
        case '(':
          

      }
      sin >> c;
    }
    getline(cin, s);
  }

  return 0;
}
