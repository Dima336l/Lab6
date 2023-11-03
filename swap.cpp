#include <iostream>

using namespace std;

void printArray(int arr [], int size);
void swap(int (&arr) [], int pos1, int pos2);

int main(){
    int numbers [] = {1, 2, 3, 4, 5};
   printArray(numbers, 5);
   swap(numbers,0,4);
   printArray(numbers,5);
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

void swap(int (&arr) [], int pos1, int pos2) {
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}
