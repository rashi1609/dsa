#!/usr/bin/env python3
"""
Array Reverse Program
Reverses an array using multiple approaches
"""

def reverse_array_builtin(arr):
    """Reverse array using built-in method"""
    return arr[::-1]

def reverse_array_loop(arr):
    """Reverse array using a loop"""
    n = len(arr)
    for i in range(n // 2):
        arr[i], arr[n - 1 - i] = arr[n - 1 - i], arr[i]
    return arr

def reverse_array_recursive(arr, start=0, end=None):
    """Reverse array using recursion"""
    if end is None:
        end = len(arr) - 1
    
    if start >= end:
        return arr
    
    arr[start], arr[end] = arr[end], arr[start]
    return reverse_array_recursive(arr, start + 1, end - 1)

def main():
    # Test array
    arr = [1, 2, 3, 4, 5]
    
    print("Original array:", arr)
    print()
    
    # Method 1: Using slicing
    print("Method 1 - Using slicing ([::-1]):")
    result1 = reverse_array_builtin(arr)
    print("Reversed array:", result1)
    print()
    
    # Method 2: Using loop
    print("Method 2 - Using two-pointer approach:")
    arr2 = [1, 2, 3, 4, 5]
    result2 = reverse_array_loop(arr2)
    print("Reversed array:", result2)
    print()
    
    # Method 3: Using recursion
    print("Method 3 - Using recursion:")
    arr3 = [1, 2, 3, 4, 5]
    result3 = reverse_array_recursive(arr3)
    print("Reversed array:", result3)
    print()
    
    # Test with different array
    print("Testing with another array [10, 20, 30, 40, 50, 60]:")
    arr4 = [10, 20, 30, 40, 50, 60]
    print("Original:", arr4)
    print("Reversed:", reverse_array_builtin(arr4))

if __name__ == "__main__":
    main()
