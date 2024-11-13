#include <stdio.h>

int main() {
    int n, sum = 0;

    // Read the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n]; // Define an array of size n

    printf("Enter %d space-separated integers: ", n);

    // Read the integers and calculate the sum
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each integer to sum
    }

    // Print the sum
    printf("Sum of the integers: %d\n", sum);

    return 0;
}

