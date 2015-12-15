#include <iostream>
#include <sstream>
#include <string>
#include "dynstack.h"
#include "fraction.h"
#include <cmath>
#include <map>

/* This program implements an RPN calculator which accepts RPN expressions in the 
   following format.

   floating or real numbers
   rpn rpn +
   rpn rpn *
   rpn rpn /
   rpn rpn -

   rpn S
   rpn R

   Example
   =======

   6 S 5 * R + evaluates to 36

   We use a stack which is simulated by a linked list in this program.

*/
 
using namespace std;

int main(int argc, char* argv[]) {

  string s;
  Fraction x, y, z, it;
  Fraction sv, rcv;
  char k;
  double real;
  map<char,Fraction> mymap;

  DynStack<Fraction> stack;

  cout << "Please enter an expression: ";
  getline(cin, s);

  while (s!="") {

    istringstream sin(s + " ");

    sin >> k;

    while(!sin.eof()) {

    switch (k) {
      case '+': 
        x = stack.top();
        stack.pop();
        y = stack.top();
        stack.pop();
        z = x + y;
        stack.push(z);
      break;

      case '-': 

        x = stack.top();
        stack.pop();
        y = stack.top();
        stack.pop();
        z = x - y;
        stack.push(z);
      break;

      case '*':

        x = stack.top();
        stack.pop();
        y = stack.top();
        stack.pop();
        z = x * y;
        stack.push(z);
      break;

      case '/':

        it = stack.top();
        stack.pop();
        y = stack.top();
        stack.pop();
        z = x / y;
        stack.push(z);
      break;

      case 'S':

        x = stack.top();
        sv = x;
      break;

      case 'R':

        rcv = sv;
        x = rcv;
        stack.push(x);
      break;

      case '(':
        cout << "fraction broken" << endl;

      break;


      default:
        sin.putback(k);
        sin >> real;

        if (sin.fail()) {
        	cout << "Not a Number" << endl;
        	throw "Malformed Number";
        }

        int denominator = 1;
        while (abs(int(real) - real) > 0.0000000000000001) {
        	real = real * 10;
        	denominator = denominator * 10;
        }

        stack.push(Fraction(int(real), denominator));
      break;

    }
    sin >> k;
   }
   it = stack.top();
   mymap['i']=it;
   stack.pop();
   cout << "it is: " << it << endl;
   if (!stack.isEmpty()) {
     cout << "Expression is malformed";
   }
   cout << "Please enter an expression: ";
   getline(cin, s);
  }
  cout << "RPN Calculator is done." << endl;
  return 0;
}
