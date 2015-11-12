//Queue class implementation

#include "queue.h"

Node::Node(int x, Node* next) {
  val = x;
  this->next = next;
}

Node::~Node() {
  if (next == nullptr)
    return;

  try {
    delete next;
  } catch(...) {}
}

void Node::setNext(Node* next) {
  this->next = next;
}

Node* Node::getNext() {
  return next;
}

void Node::setData(int val) {
  this->val = val;
}

int Node::getData() {
  return val;
}

Queue::Queue() {

  Node* dummy = new Node(-1,nullptr);
  head = dummy;
  tail = dummy;

}

Queue::~Queue() {
  try {
    delete head;
  } catch (...) {}
}

void Queue::enqueue(int item) {

  tail->setNext(new Node(item,nullptr));
  tail = tail->getNext();

}

int Queue::dequeue() {

  int item = head->getNext()->getData();
  Node* newFront = head->getNext()->getNext();
  Node * toDelete = head->getNext();
  if (toDelete == tail)
    tail = head;
  toDelete->setNext(nullptr);
  delete toDelete; // reclaims heap space
  head->setNext(newFront);

  return item;
}

bool Queue::isEmpty() {

  return head->getNext() == nullptr;
  // return head == tail;
}

Queue& operator<<(Queue& q, int x) {
  q.enqueue(x);

  return q;
}

Queue& operator>>(Queue& q , int& x) {
  x = q.dequeue();

  return q;
}

