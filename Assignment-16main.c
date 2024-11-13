#include <stdio.h>

int main() {
    int n;

    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if the array has at least two elements
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    int arr[n]; // Define an array of size n

    printf("Enter %d elements: ", n);

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the two largest numbers
    int max1 = arr[0] > arr[1] ? arr[0] : arr[1];
    int max2 = arr[0] < arr[1] ? arr[0] : arr[1];

    // Traverse the array to find the two largest distinct elements
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;  // Update the second largest
            max1 = arr[i]; // Update the largest
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; // Update the second largest if it's distinct
        }
    }

    // Calculate and print the maximum sum of two distinct integers
    int maxSum = max1 + max2;
    printf("The maximum sum of two distinct integers is: %d\n", maxSum);

    return 0;
}
