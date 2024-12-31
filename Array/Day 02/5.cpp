// Fibonacci Series

#include <iostream>
using namespace std;

void fibonacci(int n) {

    if (n < 2) {
        return;
    }

    int* temp = new int[n];
    
    temp[0] = 0;
    temp[1] = 1;

    for (int i = 2; i < n; i++) {
        temp[i] = temp[i-1] + temp[i-2];
    }

    for(int i = 0; i < n; i++) {
        cout << temp[i] << "\t";
    }
    delete[] temp;
}



int main() {

    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);


    return 0;
}