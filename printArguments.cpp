#include <iostream>
using namespace std;

int main( int argc, char *argv[] ) {
  cout << "Program name: " << argv[0] << endl;
  cout << "Called with: " << argc-1 << " arguments : ";
  for (int i = 1; i < argc; i++) {
    cout << argv[i] << " ";
  }
  cout << endl;
}
