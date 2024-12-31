#include <iostream>
using namespace std;

int selection(char arr[], int n) {
    int index;
    for (int i = 0; i < n; i++) {
        index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

int main() {

    char arr[] = {'a', 'i', 'o', 'e', 'u'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selection(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}