#include <iostream>
using namespace std;

void hw(int arr[], int n) {
    int index;
    for (int i = n - 1; i >= 0; i--) {
        index = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}

int main() {
    int arr[6] = {2, 78, 6, 4, 6, 3};

    cout << "Unsorted Array : \n";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << "\t";
    }

    hw(arr, 6);

    cout << "Sorted Array : \n";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}