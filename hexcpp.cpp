#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {

  int x, y;
  int k;

/*  cin >> x >> y;

  cout << x / y  << endl; /* cout << x+1 << '\n'; */


  for (k=1;k<argc;k++) {

    istringstream sin(argv[k]);

    sin >> x;

    cout << hex << x << '\n';
  }

  return 0;
}
