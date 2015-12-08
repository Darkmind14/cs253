#include <iostream>
#include "queue.h"
#include <map>


using namespace std;

void emptyTheQueue(Queue<int>& myqueue) {

  while (!myqueue.isEmpty()) 
    cout << myqueue.dequeue() << endl;

}

int main(int argc, char* argv[]) {

  Queue<int> queue;
  map<string, int> indexes; 
  //map<string, Fraction> memory;             

  int x;

  indexes["Kent"] = 0;
  indexes["Denise"] = 1;
  indexes["Mesa"] = 2;

  cout << indexes["Denise"] << endl;

  cin >> x;

  while (!cin.eof()) {
     // process x
     queue.enqueue(x);   

     // read the next x
     cin >> x;
  }

  while (!queue.isEmpty()) {
    x = queue.dequeue();
    cout << x << endl;
  }

  return 0;
}
