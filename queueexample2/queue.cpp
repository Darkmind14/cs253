//Queue class implementation

#include "queue.h"
Node::Node(int x, Node* next) {
  val = x;
  this->next = next;
}


Queue::Queue() {

  Node* dummy = new Node(-1,null);
  head = dummy;

}

void Queue::enqueue(int item) {

  Node* ptr = head;

  while (ptr->getNext() != null)
    ptr = ptr->getNext();

  ptr->setNext(new Node(item,null));

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

