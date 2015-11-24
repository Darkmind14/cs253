#include <iostream>
#include <sstream>
#include <cstring>
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

   We use a stack which is simulated by a vector in this program.

*/
 
using namespace std;

int main(int argc, char* argv[]) {

  int x, y;
  int sv, rcv;
  int k;

  DynStack stack;

  for (k=1;k<argc;k++) {

    if (!strcmp("+",argv[k])) {

      x = stack.top();
      stack.pop();
      y = stack.top();
      stack.pop();
      x = x + y;
      stack.push(x);

    } else if (!strcmp("-",argv[k])) {

      x = stack.top();
      stack.pop();
      y = stack.top();
      stack.pop();
      x = y - x;
      stack.push(x);

    } else if (!strcmp("*",argv[k])) {

      x = stack.top();
      stack.pop();
      y = stack.top();
      stack.pop();
      x = x *y;
      stack.push(x);

    } else if (!strcmp("/",argv[k])) {

      x = stack.top();
      stack.pop();
      y = stack.top();
      stack.pop();
      x = y / x;
      stack.push(x);

    } else if (!strcmp("S",argv[k])) {

      x = stack.top();
      sv = x;

    } else if (!strcmp("R",argv[k])) {

      rcv = sv;
      x = rcv;
      stack.push(x);

    } else { /* must be a number */
      istringstream sin(argv[k]);
      sin >> x;
      stack.push(x);

    }
  }
  
  x = stack.top();
  try {
    stack.pop();
  }
  catch(EmptyStackException* ex) {
    cerr << ex->getMessage() << endl;
  }
  cout << x << endl; 
  return 0;
}
