#include <iostream>
#include "queue.h"

using namespace std;

void emptyTheQueue(Queue& myqueue) {

  while (!myqueue.isEmpty())
    cout << myqueue.dequeue() << endl;

}


int main(int argc, char* argv[]) {

  Queue myqueue;

  int x;

  int* y;

  y = new int;

  cin >> *y;

  cout << *y << endl;

  delete y;

  cin >> x;

  while (!cin.eof()) {

    // process x
    myqueue << x;

    // read the next x
    cin >> x;

  }

  // emptyTheQueue(myqueue);

  while (!myqueue.isEmpty()) {
    myqueue >> x;
    cout << x << endl;
  }
  cout << *y << endl;
  return 0;
}
