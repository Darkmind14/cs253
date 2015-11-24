//DynStack class implementation

#include "dynstack.h"
#include <iostream>
#include <cstddef>
#define debug

using namespace std;

EmptyStackException::EmptyStackException(string message) {
  
  msg = message;

}

string EmptyStackException::getMessage() {

  return msg;

}

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

  head = nullptr;
  // head = NULL;
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

  Node* next;
  next = new Node(item, head);
  head = next;

}

double DynStack::pop() {
  
  Node* tmptr = head->getNext();
  double item = head->getData();
  head = tmptr;
  
  
  return item;

}

double DynStack::top() {

  return head->getData();

}

bool DynStack::isEmpty() {

  return head == nullptr;

}
