#include <iostream>
#include "dynstack.h"

using namespace std;

int main(int argc, char* argv[]) {

  DynStack* mydynsptr = new DynStack();

  double x;

  x = 5;
  cout << x << endl;

  mydynsptr->push(x);

  cout << mydynsptr->top() << endl;
  x = 6;

  mydynsptr->push(x);

  cout << mydynsptr->top() << endl;
  mydynsptr->pop();
  cout << mydynsptr->top() << endl;

  delete mydynsptr; 

  return 0;
}
