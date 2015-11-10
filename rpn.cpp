#include <iostream>
#include <sstream>
#include <vector>

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

  vector<double> stack;

  for (k=1;k<argc;k++) {

    if (!strcmp("+",argv[k])) {

      x = stack.back();
      stack.pop_back();
      y = stack.back();
      stack.pop_back();
      x = x + y;
      stack.push_back(x);

    } else if (!strcmp("-",argv[k])) {

      x = stack.back();
      stack.pop_back();
      y = stack.back();
      stack.pop_back();
      x = y - x;
      stack.push_back(x);

    } else if (!strcmp("*",argv[k])) {

      x = stack.back();
      stack.pop_back();
      y = stack.back();
      stack.pop_back();
      x = x *y;
      stack.push_back(x);

    } else if (!strcmp("/",argv[k])) {

      x = stack.back();
      stack.pop_back();
      y = stack.back();
      stack.pop_back();
      x = y / x;
      stack.push_back(x);

    } else if (!strcmp("S",argv[k])) {

      x = stack.back();
      sv = x;

    } else if (!strcmp("R",argv[k])) {

      rcv = sv;
      x = rcv;
      stack.push_back(x);

    } else { /* must be a number */
      istringstream sin(argv[k]);
      sin >> x;
      stack.push_back(x);

    }
  }
  
  x = stack.back();
  stack.pop_back();

  if (stack.size() != 0) {
    cout << "RPN Expression is invalid." << endl;
    return -1;
  }
  cout << x << endl; 
  return 0;
}
