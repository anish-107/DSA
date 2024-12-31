#include <iostream>
using namespace std;

void rotate_right(int arr[], int n) {
    int last = arr[n-1];

    for (int i = n - 2; i >= 0; i--) {
        arr[i+1] = arr[i];
    }

    arr[0] = last;
}


void rotate_left(int arr[], int n) {
    int first = arr[0];

    for (int i = 0; i <= n-2; i++) {
        arr[i] = arr[i+1];
    }

    arr[n-1] = first;
}


int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotate_left(arr, n);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotate_right(arr, n);

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}