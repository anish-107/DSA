// Reverse an array

#include <iostream>
using namespace std;

void reverse1(int arr[], int n) {
    int* temp = new int[n];
    for(int i = 0; i < n; i++) {
        temp[i] = arr[n-i-1];
    }

    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    delete[] temp;
}



void reverse2(int arr[], int n) {
    int left = 0, right = n-1;

    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

}


int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse1(arr, n);
    cout << "Reversed array using reverse1: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reset array to original state
    int arr2[] = {1, 2, 3, 4, 5};

    reverse2(arr2, n);
    cout << "Reversed array using reverse2: ";
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}