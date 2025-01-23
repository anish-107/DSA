// Try to sort a character array.

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the array : ";
    cin >> n;

    char* arr = (char*)malloc(n * sizeof(char));

    cout << "Enter the elements of the array : \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < n - 1; i++) {
        int index = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    free(arr);

    return 0;
}