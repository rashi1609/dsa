#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Method 1: Reverse using two-pointer approach
void reverseArrayLoop(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }
}

// Method 2: Reverse using recursion
void reverseArrayRecursive(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    swap(arr[start], arr[end]);
    reverseArrayRecursive(arr, start + 1, end - 1);
}

// Method 3: Reverse using STL
void reverseArraySTL(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}

// Utility function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Utility function to print vector
void printVector(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Test array 1
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    cout << "Original array: ";
    printArray(arr1, n1);
    cout << endl;
    
    // Method 1: Using two-pointer approach
    cout << "Method 1 - Using two-pointer approach:" << endl;
    int arr2[] = {1, 2, 3, 4, 5};
    reverseArrayLoop(arr2, n1);
    cout << "Reversed array: ";
    printArray(arr2, n1);
    cout << endl;
    
    // Method 2: Using recursion
    cout << "Method 2 - Using recursion:" << endl;
    int arr3[] = {1, 2, 3, 4, 5};
    reverseArrayRecursive(arr3, 0, n1 - 1);
    cout << "Reversed array: ";
    printArray(arr3, n1);
    cout << endl;
    
    // Method 3: Using STL
    cout << "Method 3 - Using STL reverse():" << endl;
    vector<int> arr4 = {1, 2, 3, 4, 5};
    reverseArraySTL(arr4);
    cout << "Reversed array: ";
    printVector(arr4);
    cout << endl;
    
    // Test with another array
    cout << "Testing with another array [10, 20, 30, 40, 50, 60]:" << endl;
    int arr5[] = {10, 20, 30, 40, 50, 60};
    int n2 = sizeof(arr5) / sizeof(arr5[0]);
    cout << "Original: ";
    printArray(arr5, n2);
    reverseArrayLoop(arr5, n2);
    cout << "Reversed: ";
    printArray(arr5, n2);
    
    return 0;
}
