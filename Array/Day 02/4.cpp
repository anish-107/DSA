// Missing Natural Number

#include <stdio.h>
using namespace std;


int missing(int arr[], int n) {
    int sum = 0, net_sum = (n * (n+1)) / 2;

    for (int i = 0; i < n-1; i++) {
        sum += arr[i];
    }

    return net_sum - sum;
}


int main() {

    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // Including the missing number
    printf("Missing number: %d\n", missing(arr, n));


    return 0;
}