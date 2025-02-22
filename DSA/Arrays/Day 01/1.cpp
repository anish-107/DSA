// Remove the minimum element in an array.

#include <iostream>
#include <climits>
using namespace std;

void removeElement(int arr[], int minIndex, int& n) {
    for(int i = minIndex; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
}

int minElement(int arr[], int n) {
    int min = INT_MAX, minIndex = -1;

    if(n == 0) {
        return minIndex;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;        
        }
    }

    return minIndex;
}

int main() {
    int n;

    cout << "Enter the size of the array : ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter the elements of the array (space - seperated): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original Array : [";
    for(int i = 0; i < n; i++) {
        if(i == n - 1) {
            cout << arr[i] << "]\n";
        } else {
            cout << arr[i] << ", ";
        }
    }

    int minIndex = minElement(arr, n);
    if(minIndex != -1) {
        removeElement(arr, minIndex, n);
    } else {
        cout << "Error !!! The array was empty.\n";
    }

    cout << "New Array : [";
    for(int i = 0; i < n; i++) {
        if(i == n - 1) {
            cout << arr[i] << "]\n";
        } else {
            cout << arr[i] << ", ";
        }
    }

    delete[] arr;

    return 0;
}