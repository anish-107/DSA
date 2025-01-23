# **Day 01**

## **What is Sorting? Explain with Real-Life Examples.**

**Sorting** is the process of arranging data in a specific order, usually ascending (smallest to largest) or descending (largest to smallest).  
### **Real-Life Examples:**
1. **Books in a Library:** Books are often arranged alphabetically by title or author for easy access.
2. **Organizing Exam Marks:** Student marks can be sorted from highest to lowest or lowest to highest.
3. **Grocery Store:** Items on a shelf might be arranged by price, from cheapest to most expensive.

---

## **What is the Use of Sorting in Programming?**

Sorting is essential in programming as it:
1. Improves **search efficiency** (e.g., binary search works on sorted data).
2. Makes it easier to analyze data (e.g., finding median or duplicates).
3. Simplifies tasks like merging datasets or filtering top/bottom values.
4. Enhances the performance of other algorithms (e.g., searching, clustering).

---

## **What is Ascending, Descending, Increasing, Non-Increasing, Decreasing, and Non-Decreasing?**

1. **Ascending Order:**
   - Data is arranged from smallest to largest.
   - Example: `1, 3, 5, 7`.
2. **Descending Order:**
   - Data is arranged from largest to smallest.
   - Example: `7, 5, 3, 1`.
3. **Increasing Order:**
   - Similar to ascending order. Values grow strictly without repetition.
   - Example: `1, 2, 3, 4`.
4. **Non-Increasing Order:**
   - Values decrease, but repetition is allowed.
   - Example: `5, 5, 3, 1`.
5. **Decreasing Order:**
   - Data strictly decreases.
   - Example: `5, 4, 3, 2`.
6. **Non-Decreasing Order:**
   - Values increase, but repetition is allowed.
   - Example: `2, 2, 4, 5`.

---

## **Example of Sorting an Array**

### Input:  
`[5, 2, 9, 1, 7]`  

### Sorted Output (Ascending):  
`[1, 2, 5, 7, 9]`

---

## **List Different Sorting Techniques**

1. **Selection Sort**
2. **Bubble Sort**
3. **Insertion Sort**
4. **Merge Sort**
5. **Quick Sort**
6. **Heap Sort**
7. **Radix Sort**
8. **Counting Sort**
9. **Bucket Sort**

---

## **Explain Selection Sort with an Example and a Real-Life Example**

### **Definition:**
Selection sort is a simple sorting algorithm that repeatedly selects the smallest (or largest) element from the unsorted part of the array and places it in the sorted part.

### **Example:**
Array: `[5, 2, 9, 1]`
1. Find the smallest element (`1`) and swap it with the first element: `[1, 2, 9, 5]`.
2. Find the smallest element from the unsorted part (`2`) and place it: `[1, 2, 9, 5]`.
3. Continue until fully sorted: `[1, 2, 5, 9]`.

### **Real-Life Example:**
Imagine organizing books on a shelf by height. You repeatedly find the shortest book and move it to the correct position.

---

## **Algorithm and Pseudo Code for Selection Sort**

### **Algorithm:**
1. Start from the first element.
2. Find the smallest element in the unsorted portion of the array.
3. Swap it with the first element of the unsorted portion.
4. Move to the next position and repeat until the array is sorted.

### **Pseudo Code:**
```
for i = 0 to n-1:
    minIndex = i
    for j = i+1 to n:
        if array[j] < array[minIndex]:
            minIndex = j
    swap(array[i], array[minIndex])
```

---

## **Time and Space Complexity Analysis of Selection Sort**

### **Time Complexity:**
- Outer loop runs `n` times, inner loop runs up to `n` times.
- **Best Case:** O(n²) (still compares every element).
- **Worst Case:** O(n²).
- **Average Case:** O(n²).

### **Space Complexity:**
- **In-Place:** No extra memory is used.
- **Space Complexity:** O(1).

---

## **Code for Selection Sort in C++ and Java**

### **C++ Code:**
```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {5, 3, 6, 2, 8};
    int n = 5;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

### **Java Code:**
```java
class SelectionSort {
    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    public static void main(String[] args) {
        int[] arr = {5, 3, 6, 2, 8};
        selectionSort(arr);
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
```

---

## **Properties of Selection Sort**
1. **Stable:** No, swapping might change the relative order of equal elements.
2. **In-Place:** Yes, uses constant additional memory.
3. **Comparison-Based:** Yes, compares elements to find the minimum.
4. **Best Use Case:** When the array is small or memory is limited.

---

## **Questions**

### **1. Implement Selection Sort by Selecting Maximum Element**
**Algorithm:**
1. Start from the last element of the array.
2. Find the largest element in the unsorted portion of the array.
3. Swap it with the last element of the unsorted portion.
4. Repeat for the remaining unsorted portion.

---

### **2. Sort a Character Array**
**Algorithm:**
1. Treat characters as numbers based on their ASCII values.
2. Use the same selection sort logic to sort them.

--- 