#include <stdio.h>

int insert(int arr[], int n, int x, int pos, int cap) {
    // Check if the size of the array is equal to the array's capacity to determine available spaces
    if (n == cap) {
        return n; // Array is full, cannot insert more elements
    }

    // Find the index of the desired element
    int index = pos - 1;

    // Shift elements to the right to make space for the new element
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the desired position
    arr[index] = x;

    return n + 1; // Return the updated size of the array
}

// Function to print the elements of an array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4};
    int size = 4; // Current size of the array (number of elements)

    // Call the insert function to insert '9' at position 4
    size = insert(arr, size, 9, 4, 5);

    // Print the array elements
    print_array(arr, size);

    return 0;
}
