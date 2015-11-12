#ifndef queue_h
#define queue_h

#include <vector>

using namespace std;
class Node {

  public:
    Node(int, Node*);
    ~Node();

    Node* getNext();
    int getData();
    void setNext(Node*);
    void setData(int);

  private:
    int val;
    Node* next;
};

class Queue {
  public:
    Queue();
    ~Queue(); // not queue, deconstructor

    // the enqueue method enqueues an item on the queue.
    void enqueue(int item);
    int dequeue();
    bool isEmpty();

  private:
    Node* head;
    Node* tail;

};

Queue& operator<<(Queue&, int);
Queue& operator>>(Queue&, int&);

#endif
