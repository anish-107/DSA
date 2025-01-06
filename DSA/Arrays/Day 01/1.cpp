#include <iostream>
using namespace std;

int main() {
    // Declaration of an array with size 11
    int marks[11];

    /*
    Types of array initialization:

    1. Explicit initialization with all values:
       int values[5] = {1, 2, 3, 4, 5}; 

    2. Letting the compiler infer the size:
       int values[] = {1, 2, 3, 4, 5};  // Size is automatically 5
    */

    // User input for initialization
    // cout << "Enter 11 marks: ";
    // for (int i = 0; i < 11; i++) {
    //     cin >> marks[i];
    // }

    // Example of different types of initialization:

    // Type 3: Partial initialization (rest are 0 by default)
    int arr[5] = {1, 2};

    // Type 4: Initializing all elements to zero
    int arr2[5] = {0};

    // Type 5: Declaration without initialization (contains garbage values)
    int arr3[5];

    // Displaying the contents of arrays
    cout << "Array - 1 (Partial Initialization): ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array - 2 (All Zeros): ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Array - 3 (Uninitialized - Garbage Values): ";
    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
