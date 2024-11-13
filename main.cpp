#include <stdio.h>

void rotate(int arr[], int n, int d) {
    // Normalize the number of rotations
    d = d % n; // In case d is greater than n

    // Rotate the array
    for (int i = 0; i < d; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, d;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &d);

    // Rotate the array
    rotate(arr, n, d);

    // Print the rotated array
    printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}
