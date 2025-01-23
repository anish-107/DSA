// Try to implement selection sort by selecting maximum element.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = (int*)malloc(n * sizeof(int));

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    for (int i = n - 1; i > 0; i--) {
        int index = i;

        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }

        swap(arr[i], arr[index]);
    }

    cout << "Sorted Array:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    free(arr); 

    return 0;
}
