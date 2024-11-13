#include <stdio.h>

int countOccurrences(int *arr, int size, int element) {
    int count = 0;
    int *ptr = arr;  // Pointer to the beginning of the array

    for (int i = 0; i < size; i++) {
        if (*ptr == element) {
            count++;
        }
        ptr++;  // Move the pointer to the next element
    }

    return count;
}

int main() {
    int n, element;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to count
    printf("Enter the element to count occurrences of: ");
    scanf("%d", &element);

    // Call the function and display the result
    int occurrences = countOccurrences(arr, n, element);
    printf("The element %d appears %d times in the array.\n", element, occurrences);

    return 0;
}
