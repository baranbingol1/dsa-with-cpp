#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// also we can use arr.size() instead of getting it as a param
void printArray(const array<int, 6> arr, int n) {
    for(int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
}

// Remember: all stl containers are passed by VALUE in default
void updateArray(array<int, 6> arr, int i, int val) {
    arr[i] = val;
}

void updateArrayByReference(array<int, 6> &arr, int i, int val) {
    arr[i] = val;
}

int main() {

    // array<datatype, num_elements>
    array<int, 6> arr = {1,2,3,4,5,6};
    int n = arr.size(); // getting size of an array

    updateArray(arr, 0, 10); // it is not inplace
    printArray(arr, n);
    cout << endl;
    updateArrayByReference(arr, 0, 10); // it is inplace
    printArray(arr, n);
    cout << endl;

    // inplace sorting
    sort(arr.begin(), arr.end());
    printArray(arr, n);
    cout << endl;
    // filling
    array<int,5> zeros;
    zeros.fill(0);
    for (int zero : zeros)
        cout << zero << " ";

    return 0;
}

// Output:
// 1 2 3 4 5 6
// 10 2 3 4 5 6
// 2 3 4 5 6 10
// 0 0 0 0 0
