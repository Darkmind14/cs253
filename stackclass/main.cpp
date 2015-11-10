#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char* argv[]) {

  Stack mystack;

  int x;

  cin >. x;

  while (!cin.eof()) {

    // process x
    mystack.push(x);

    // read the next x
    cin >> x;

  }
  
  while (!mystack.isEmpty())
    cout << mystack.pop() << endl;

  return 0;
}
