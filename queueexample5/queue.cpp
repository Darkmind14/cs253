#include <iostream>

#define debug

//Queue class implementation
#include "queue.h"

EmptyQueueException::EmptyQueueException(string message) {
  msg = message;
}

string EmptyQueueException::getMessage() {
  return msg;
}

