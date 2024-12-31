// Second Max

#include <iostream>
#include <limits.h>
using namespace std;


int second(int arr[], int n) {
    if (n < 2 ) {
        return -1;
    }

    int maximum = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maximum) {
            second = maximum;
            maximum = arr[i];
        }
        else if (arr[i] > second && arr[i] != maximum) {
            second = arr[i];
        }
    }

    return second == INT_MIN ? -1 : second;
}


int main() {

    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = second(arr, n);
    if (result == -1) {
        cout << "There is no second largest element" << endl;
    } else {
        cout << "The second largest element is " << result << endl;
    }

    return 0;
}