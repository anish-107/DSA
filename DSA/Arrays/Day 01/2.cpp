// Calculate Min and Max of elements in an Array

#include <iostream>
#include <climits>
using namespace std;


int main() {
    int arr[5], min = INT_MAX, max = INT_MIN;

    cout << "Enter the values of array : ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "MAX : " << max << endl << "MIN : " << min << endl;

    return 0;
}
// O(n)