#include <iostream>

using namespace std;

void calculateCube();

int main(){
   calculateCube(); 
  return 0;
}

void calculateCube() {
    cout << "Enter a number: ";
    int num = 0;
    cin >> num;
    cout << "The cube of the number is " << num*num*num << endl;
}
