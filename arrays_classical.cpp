#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
}

// arrays are passed by reference they will change inplace.
// passing "int arr[]" to function param is same as "int* arr"
void updateArray(int arr[], int i, int val) {
    arr[i] = val;
    // *(arr + i) = val;
}

int main() {
    int arr[] = {1,5,3,2,4}; // classical way of creating arrays
    int n = sizeof(arr)/sizeof(arr[0]); // infering size of array
    cout << "Size of arr is " << n << endl;
    cout << "Array before update is " << endl;
    printArray(arr, n);

    // actual array is updated
    updateArray(arr, 1, 13);

    cout << "\nArray after update is " << endl;
    printArray(arr, n);

    return 0;
}

// Output : 
// Size of arr is 5
// Array before update is
// 1 5 3 2 4
// Array after update is
// 1 13 3 2 4
