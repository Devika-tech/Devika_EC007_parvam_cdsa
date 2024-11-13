#include <stdio.h>
#include <stdlib.h> // For abs function

// Function to update values
void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);  // Calculate the absolute difference

    *a = sum;     // Set the value of a to the sum
    *b = diff;    // Set the value of b to the absolute difference
}

int main() {
    int a, b;

    // Input values for a and b
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    // Call the update function
    update(&a, &b);

    // Output the results
    printf("After update:\n");
    printf("a = %d\n", a);  // Sum of original a and b
    printf("b = %d\n", b);  // Absolute difference of original a and b

    return 0;
}
