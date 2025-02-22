# Notes on Day 01

## Need of Array

### Problem Statement
When dealing with multiple pieces of similar data, managing them with separate variables becomes inefficient and cumbersome. For example, storing the marks of 100 students using individual variables would be impractical.

### Why Not Use Variables Only
- Variables are not scalable for large amounts of similar data.
- Code becomes lengthy and hard to manage.
- Operations like sorting, searching, or updating elements become inefficient.

### The Idea Behind Array Indexing
An array stores elements in a contiguous memory block, and each element can be accessed using its index. Indexing starts from 0, meaning the first element is at index 0, the second at index 1, and so on.

### Why It Is Better
- Simplifies code by using a single variable name.
- Efficient memory usage.
- Easy to iterate, sort, and search.
- Provides direct access using indexes.

---

## More About Arrays

### Features of Array
- Fixed size.
- Stores elements of the same data type.
- Random access using indices.
- Contiguous memory allocation.

### Advantages
- Efficient access time (O(1) for accessing elements).
- Easy to traverse using loops.
- Memory-friendly for storing similar data types.

### Disadvantages
- Fixed size requires predefined length.
- Insertion and deletion can be costly (O(n) time complexity).
- Wastage of memory if not fully utilized.

---

## C++ Syntax

### How Is Array Declared
```cpp
int arr[5]; // Declares an integer array of size 5
```

### How to Initialize Array Elements
```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### How to Access Array Elements
```cpp
cout << arr[2]; // Accesses the third element (index 2)
```

### How to Initialize Array with a Given Default Value
```cpp
int arr[5] = {0}; // Initializes all elements to 0
```

### How Do I Remove an Element
In C++, array sizes are fixed. To "remove" an element, shift subsequent elements:
```cpp
void removeElement(int arr[], int& n, int index) {
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
```

---

## Important Things

### How Array Indexing Actually Works
Array indexing works on the principle of pointer arithmetic. The address of an element is calculated as:
```
Address = Base Address + (Index * Size of Data Type)
```

### Why Is Array Contiguous Only
Contiguous memory allows:
- Fast access using direct addressing.
- Better cache locality, enhancing performance.

### How It Is Linked with Memory Management of Computer
Arrays directly map to the computer's memory architecture, allowing efficient storage and retrieval due to their predictable memory layout.

---

## Extra

### How Is Memory Addressed in Computer
Memory is addressed using binary numbers, with each memory cell having a unique address.

### What Is Byte and Word Addressable
- **Byte-addressable:** Each address points to a single byte.
- **Word-addressable:** Each address points to a word (multiple bytes).

### What Is 32-bit and 64-bit
Refers to the width of the processor's registers:
- **32-bit:** Can address up to 4GB of RAM.
- **64-bit:** Can handle significantly more memory, enhancing performance.

### Why Array Is Zero Indexed and Not 1-Indexed
Zero indexing simplifies memory address calculation:
```
Address = Base Address + Index * Size
```
This way, the first element requires no additional computation.

---

## Problems

### 1. Write a C++ Program to Remove the Minimum Element in an Integer Array

#### Algorithm
1. Find the minimum element and its index.
2. Shift elements after the minimum element to the left.
3. Reduce the array size by one.

#### Pseudo Code
```
function removeMinElement(arr, n):
    minIndex = index of minimum element
    for i = minIndex to n - 2:
        arr[i] = arr[i + 1]
    n = n - 1
    return arr
```

#### Code
```cpp
#include <iostream>
#include <climits>
using namespace std;

int findMinIndex(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty" << endl;
        return -1;
    }

    int min = INT_MAX, minIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void removeElement(int arr[], int& n, int index) {
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter the elements of the array (space-separated): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original Array: [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";

    int minIndex = findMinIndex(arr, n);
    if (minIndex != -1) {
        removeElement(arr, n, minIndex);
    }

    cout << "Array after removing minimum element: [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";

    delete[] arr;

    return 0;
}
```

