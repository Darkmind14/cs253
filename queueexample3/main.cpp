#include <iostream>
#include "queue.h"

using namespace std;

void emptyTheQueue(Queue& myqueue) {

  while (!myqueue.isEmpty())
    cout << myqueue.dequeue() << endl;

}


int main(int argc, char* argv[]) {

  Queue* myqptr = new Queue();

  int x;

  cin >> x;

  while (!cin.eof()) {

    // process x
    //myqueue << x;
    myqptr->enqueue(x);

    // read the next x
    cin >> x;

  }

  // emptyTheQueue(myqueue);

  while (!myqptr->isEmpty()) {
    //myqueue >> x;
    x = myqptr->dequeue();
    cout << x << endl;
  }

  delete myqptr;

  return 0;
}
