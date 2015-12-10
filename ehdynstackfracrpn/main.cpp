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
  cout << "Defined Fraction" << endl;
  cout << "Now Print!" << endl;
  cout << myfraction.numerator() << "/" << myfraction.denominator() << endl;
  myfraction.add(myfraction2);
  myfraction.subtract(myfraction2);
  myfraction.multiply(myfraction2);
  myfraction.divide(myfraction2);
  cout << myfraction.asDouble() << endl;

  return 0;
}
