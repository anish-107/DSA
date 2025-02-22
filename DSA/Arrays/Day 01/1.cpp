// Find minimum element in a an array of integers.

#include <iostream>
#include <climits>
using namespace std;


int min(int arr[], int n) {
    // First Apporach
    if (n == 0) {
        printf("Array is empty");
        return -1;
    }

    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
    // Time Complexity : O(n), T(n) = 2n + 3
    // Space Complexity : O(1), only one variable is used, which does not depend on n.
}


int main() {
    int n;

    cout << "Enter the size of the array: ";   
    cin >> n;

    int* arr = new int[n];

    cout << "Enter the elements of the array (space - separated): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array : [";
    for(int i = 0; i < n; i++) {
        if(i == n - 1) {
            cout << arr[i] << "]" << endl;
        } else {
            cout << arr[i] << ", ";
        }
    }

    cout << "Minimum element in the array is : " << min(arr, n) << endl;

    delete[] arr;

    return 0;
}