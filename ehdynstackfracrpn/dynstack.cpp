//DynStack class implementation

#include "dynstack.h"
#include <iostream>
#include <cstddef>
#include <string>
#define debug

using namespace std;

EmptyStackException::EmptyStackException(string message) {
  
  msg = message;

}

string EmptyStackException::getMessage() {

  return msg;

}

