//Stack class implementation

#include "stack.h"

Stack::Stack() {}

void Stack::push(double item) {

  list.push_back(item);

}

double Stack::pop() {

  double item = list.back();
  list.pop_back();
  return item;

}

double Stack::top() {

  return list.back();

}

bool Stack::isEmpty() {

  return list.size() == 0;

}
