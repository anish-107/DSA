// Recursive C++ program for selection form 

#include <iostream>
using namespace std;

int findMinValue(int arr[], int i, int n) {
    int min = i;
    for(int idx = i+1; idx < n; idx++) {
        if(arr[idx] < arr[min]) {
            min = idx;
        }
    }
    return min;
}

void selectionSort(int arr[], int i, int n) {
    if(i == n) {
        return;
    }

    int min = findMinValue(arr, i, n);

    swap(arr[i], arr[min]);

    selectionSort(arr, i+1, n);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, 0, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}