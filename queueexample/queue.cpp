//Queue class implementation

#include "queue.h"

Queue::Queue() {}

void Queue::enqueue(int item) {

  list.push_back(item);

}

int Queue::dequeue() {

  int item = list.front();
  list.erase(list.begin());

  return item;

}

bool Queue::isEmpty() {

  return list.size() == 0;

}

Queue& operator<<(Queue& q, int x) {
  q.enqueue(x);

  return q;
}

Queue& operator>>(Queue& q , int& x) {
  x = q.dequeue();

  return q;
}

