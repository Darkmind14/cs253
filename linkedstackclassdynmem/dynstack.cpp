//DynStack class implementation

#include "dynstack.h"
#include <iostream>
#define debug

Node::Node(double x, Node* next) {

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

void Node::setData(double val) {

  this->val = val;

}

double Node::getData() {

  return val;

}

DynStack::DynStack() {

  Node* dummy = new Node(-1,nullptr);
  head = dummy;
  tail = dummy;

}

DynStack::~DynStack() {

  try {
    #ifndef debug
      cout << "Deleting Stack" << endl;
    #endif
    delete head;
  } catch (...) {}
}

void DynStack::push(double item) {

  Node* tmp;

  tmp = new Node(item, nullptr);
  tail->setNext(tmp);
  tail = tail->getNext();

}

double DynStack::pop() {
  double item = tail->getData();
  while ( head->getNext()->getNext()->getNext() != nullptr ) {
    head->getNext();
  }
  tail->setNext(head->getNext());
  return item;

}

double DynStack::top() {

  return tail->getData();

}

bool DynStack::isEmpty() {

  return head->getNext() == nullptr;

}
