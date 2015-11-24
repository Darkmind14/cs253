#include <iostream>
#include <sstream>
#include <string>
#define debug

using namespace std;

int main(int argc, char* argv[]) {


  string s;
  
  getline(cin, s);

  while (s!="") {
    cout << "about to create stream over this string:" << s << endl;

    istringstream sin(s + " ");

    string x;

    sin >> x;

    while (!sin.eof()) {
    
      cout << x << endl;
      sin >> x;
    }

    getline(cin,s);

  }
 

  return 0;
}
