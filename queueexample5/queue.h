#ifndef queue_h
#define queue_h

#include <vector>

using namespace std;

class EmptyQueueException {
  public:
    EmptyQueueException(string);
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
class Queue {
  public:
    Queue();
    ~Queue();

    // The enqueue method enqueues an item on the queue.
    void enqueue(T item);
    T dequeue();
    bool isEmpty();

  private:
    Node<T>* head;
    Node<T>* tail;
};

template<class T>
Queue<T>& operator<<(Queue<T>&, T);

template<class T>
Queue<T>& operator>>(Queue<T>&, T&);

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

#ifdef debug
  cout << "Deleting Node " << this->val << endl;
#endif

  if (next == nullptr) 
    return;

  try {
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
Queue<T>::Queue() {
  Node<T>* dummy = new Node<T>();
  head = dummy;
  tail = dummy;
}

template<class T>
Queue<T>::~Queue() {
  try {

#ifdef debug
    cout << "Deleting Queue" << endl;
#endif

    delete head;
  } catch (...) {}
}

template<class T>
void Queue<T>::enqueue(T item) {

   Node<T>* tmp;

   try { 
      tmp = new Node<T>(item, nullptr);
   } catch (std::bad_alloc* exc) {
      cerr << "Out of Memory when enqueueing item" << endl;
   }

   tail->setNext(tmp);
   tail = tail->getNext();
}

template<class T>
T Queue<T>::dequeue() {

   if (this->isEmpty()) 
     throw new EmptyQueueException("Can't dequeue from empty queue.");

   T item = head->getNext()->getData();
   Node<T>* newFront = head->getNext()->getNext(); 
   Node<T>* toDelete = head->getNext();
   if (toDelete == tail)
     tail = head;
   toDelete->setNext(nullptr);

   delete toDelete; // reclaims heap space
   head->setNext(newFront);  
   return item;
}

template<class T>
bool Queue<T>::isEmpty() {
   return head->getNext() == nullptr;
   // return head == tail;
}

template<class T>
Queue<T>& operator<<(Queue<T>& q, T x) {
  q.enqueue(x);

  return q;
}

template<class T>
Queue<T>& operator>>(Queue<T>& q, T& x) {
  x = q.dequeue();

  return q;
}



#endif
