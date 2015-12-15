#ifndef dynstack_h
#define dynstack_h

#include <vector>
#include <string>
#define debug

using namespace std;

class EmptyStackException {

  public:
    EmptyStackException(string);
    string getMessage();

  private:
    string msg;
};

template<class T>
class Node {

  public:
    Node();
    Node(T, Node<T>*);
    ~Node();

    Node<T>* getNext();
    T getData();
    void setNext(Node<T>*);
    void setData(T);

  private:
    T val;
    Node<T>* next;
};

template<class T>
class DynStack {

  public:
    DynStack();
    ~DynStack();

    // the push method pushes an item onto the top of the stack
    void push(T);
    // the pop method pops an item off the top of the stack
    T pop();
    // the top method returns the top of the stack
    T top();
    // the isEmpty method checks if the stack is empty
    bool isEmpty();

  private:
    Node<T>* head;

};

template<class T>
DynStack<T>& operator<<(DynStack<T>&, T);

template<class T>
DynStack<T>& operator>>(DynStack<T>&, T&);

template<class T>
Node<T>::Node() {
  this->next = nullptr;
}

template<class T>
Node<T>::Node(T x, Node<T>* next) {

  val = x;
  this->next = next;

}

template<class T>
Node<T>::~Node() {

  if (next == nullptr)
    return;

  try {
    #ifndef debug
      cout << "Deleting Node " << this->val << endl;
    #endif
    delete next;
  } catch(...) {}
}

template<class T>
void Node<T>::setNext(Node<T>* next) {
 
  this->next = next;

}

template<class T>
Node<T>* Node<T>::getNext() {

  return next;

}

template<class T>
void Node<T>::setData(T val) {

  this->val = val;

}

template<class T>
T Node<T>::getData() {

  return val;

}

template<class T>
DynStack<T>::DynStack() {

  head = nullptr;
  // head = NULL;
}

template<class T>
DynStack<T>::~DynStack() {

  try {
    #ifndef debug
      cout << "Deleting Stack" << endl;
    #endif
    delete head;
  } catch (...) {}
}

template<class T>
void DynStack<T>::push(T item) {

  Node<T>* next;
  next = new Node<T>(item, head);
  head = next;

}

template<class T>
T DynStack<T>::pop() {
  
  Node<T>* tmptr = head->getNext();
  T item = head->getData();
  head = tmptr;
  delete tmptr;
  
  
  return item;

}

template<class T>
T DynStack<T>::top() {

  return head->getData();

}

template<class T>
bool DynStack<T>::isEmpty() {

  return head == nullptr;

}

template<class T>
DynStack<T>& operator<<(DynStack<T>& dy, T x) {
  dy.push(x);

  return dy;
}

template<class T>
DynStack<T>& operator>>(DynStack<T>& dy, T& x) {
  x = dy.pop();

  return dy;
}

#endif
