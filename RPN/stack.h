#ifndef stack_h
#define stack_h

#include <vector>

using namespace std;

class Stack {

  public:
    Stack();

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
