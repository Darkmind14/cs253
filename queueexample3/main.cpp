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


  //while (!cin.eof()) {
  int count = 0;
  while (false) {

    // process x
    //myqueue << x;
    myqptr->enqueue(count++);

    // read the next x
    cin >> x;

  }

  try {
    cout << queue.dequeue() << endl;
  }
  catch(EmptyQueueException* ex) {
    cerr << ex->getMessage() << endl;
  }

  // emptyTheQueue(myqueue);

/*  while (!myqptr->isEmpty()) {
    //myqueue >> x;
    x = myqptr->dequeue();
    cout << x << endl; 
  } */

  delete myqptr;

  return 0;
}
