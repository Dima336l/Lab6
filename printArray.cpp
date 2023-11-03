#include <iostream>

using namespace std;

void printArray(int arr [], int size);

int main(){
    int numbers [] = {1, 2, 3, 4, 5};
   printArray(numbers, 5); 
  return 0;
}

void printArray(int arr [], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        if (i == size-1) {
            cout << arr[i];
            break;
        }
        cout << arr[i] << ", ";
    }
    cout << " ]" << endl;
}
