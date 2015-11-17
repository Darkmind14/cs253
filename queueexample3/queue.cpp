//Queue class implementation
#include "queue.h"
#include <iostream>
# define debug

EmptyQueueException

Node::Node(int x, Node* next) {
  val = x;
  this->next = next;
}

Node::~Node() {
  if (next == nullptr) 
    return;

  try {
    #ifndef debug
      cout << "Deleting Node " << this->val << endl;
    #endif
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
    #ifndef debug
      cout << "Deleting Queue" << endl;
    #endif
    delete head;
  } catch (...) {}
}

void Queue::enqueue(int item) {

   Node* tmp;

   try {

     tmp = new Node(item, nullptr);
     throw new std::bad_alloc;
   } catch (std::bad_alloc* exc) {

      cerr << "Out of Memory when enqueueing item" << endl;
      throw 0;
   }

   tail->setNext(tmp);
   tail = tail->getNext();
}

int Queue::dequeue() {

   if (this->isEmpty()) {
     throw new EmptyQueueException("Can't dequeue from empty queue.");

   int item = head->getNext()->getData();
   Node* newFront = head->getNext()->getNext(); 
   Node* toDelete = head->getNext();
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

Queue& operator>>(Queue& q, int& x) {
  x = q.dequeue();

  return q;
}

