#include <iostream>
#include "dynstack.h"

using namespace std;

int main(int argc, char* argv[]) {

  Stack mystack;

  double x;

  x = 5;
  cout << x << endl;

  mystack.push(x);

  cout << mystack.top() << endl;

  
  while (!mystack.isEmpty())
    cout << mystack.pop() << endl;

  return 0;
}
