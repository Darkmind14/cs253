#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "usage: hexdump filename\n";
    return -1;
  }

  ifstream in(argv[1]);

  char c[17];
  int size = 1;

  while (size!=0) {

    int size = in.readsome(c, 16);

    for (int k=0; k<4; k++) {
      for (int m=0; m<4; m++) {

      int idx = k*4+m;

      if (idx < size)
        cout << hex << c[idx];

      else
        cout << "  ";
      
      }    
      cout << " ";
    }

    cout << "\n";

  }

  return 0;
}
