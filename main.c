at integer:

#include <stdio.h>

int main() {
    int number;
    int digitFrequency[10] = {0};  // Array to store the frequency of each digit (0-9)

    // Read an integer from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle the case where the number is negative
    if (number < 0) {
        number = -number;
    }

    // Process each digit of the number
    while (number > 0) {
        int digit = number % 10;  // Extract the last digit
        digitFrequency[digit]++;   // Increment the frequency of the extracted digit
        number /= 10;              // Remove the last digit
    }

    // Print the frequency of each digit
    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d\n", i, digitFrequency[i]);
    }

    return 0;
}
