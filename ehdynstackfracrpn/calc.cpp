#include <iostream>
#include <sstream>
#include <string>
#include "dynstack.h"

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
  int x, y;
  int sv, rcv;
  string k;
  int e;

  DynStack<double> stack;

  cout << "Please enter an expression: ";
  getline(cin, s);

  while (s!="") {

    istringstream sin(s + " ");

    sin >> k;

    while(!sin.eof()) {

    if (k == "+") {
      try {
        x = stack.top();
        stack.pop();
        y = stack.top();
        stack.pop();
        x = x + y;
        stack.push(x);
        e = 0;
      } catch(int e) {
          e = 1;
          cout << "Malformed expression extra plus. " << e << endl;
          throw;
        }

    } else if (k == "-") {

      x = stack.top();
      stack.pop();
      y = stack.top();
      stack.pop();
      x = y - x;
      stack.push(x);

    } else if (k == "*") {

      x = stack.top();
      stack.pop();
      y = stack.top();
      stack.pop();
      x = x * y;
      stack.push(x);

    } else if (k == "/") {

      x = stack.top();
      stack.pop();
      y = stack.top();
      stack.pop();
      x = y / x;
      stack.push(x);

    } else if (k == "S") {

      x = stack.top();
      sv = x;

    } else if (k == "R") {

      rcv = sv;
      x = rcv;
      stack.push(x);

    } else { /* must be a number */
      istringstream kin(k + " ");
      kin >> x;
      stack.push(x);

    }
    sin >> k;
   }
   x = stack.top();
   stack.pop();
   cout << x << endl;
   if (!stack.isEmpty()) {
     cout << "Expression is malformed";
   }
   cout << "Please enter an expression: ";
   getline(cin, s);
  }
  cout << "RPN Calculator is done." << endl;
  return 0;
}
