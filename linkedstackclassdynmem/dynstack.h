#ifndef dynstack_h
#define dynstack_h

#include <vector>

using namespace std;

class Node {

  public:
    Node(double, Node*);
    ~Node();

    Node* getNext();
    double getData();
    void setNext(Node*);
    void setData(double);

  private:
    double val;
    Node* next;
};

class DynStack {

  public:
    DynStack();

    // the push method pushes an item onto the top of the stack
    void push(double);
    // the pop method pops an item off the top of the stack
    double pop();
    // the top method returns the top of the stack
    double top();
    // the isEmpty method checks if the stack is empty
    bool isEmpty();

  private:
    vector<double> list;

};

#endif
