#include <stdio.h>
#include <string.h>

void encodeBinaryToDNA(char* binaryString, int n) {
    // Iterate through the binary string in pairs of two
    for (int i = 0; i < n; i += 2) {
        // Extract the current pair of bits
        char pair[3];
        pair[0] = binaryString[i];
        pair[1] = binaryString[i + 1];
        pair[2] = '\0'; // Null terminate the string

        // Check the pair and print corresponding DNA sequence character
        if (strcmp(pair, "00") == 0) {
            printf("A");
        } else if (strcmp(pair, "01") == 0) {
            printf("T");
        } else if (strcmp(pair, "10") == 0) {
            printf("C");
        } else if (strcmp(pair, "11") == 0) {
            printf("G");
        }
    }
    printf("\n");
}

int main() {
    char binaryString[100]; // Array to store the binary string
    int n;

    // Input the binary string
    printf("Enter the binary string (even length): ");
    scanf("%s", binaryString);

    // Calculate the length of the string
    n = strlen(binaryString);

    // Ensure the length is even
    if (n % 2 != 0) {
        printf("Error: The length of the binary string should be even.\n");
        return 1;
    }

    // Encode the binary string into a DNA sequence
    printf("Encoded sequence: ");
    encodeBinaryToDNA(binaryString, n);

    return 0;
}
