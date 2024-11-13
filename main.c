#include <stdio.h>
#include <ctype.h>

void toTitleCase(char str[]) {
    int i = 0;

    // Traverse through the string
    while (str[i] != '\0') {
        // If the current character is the first character of a word, capitalize it
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);  // Convert to uppercase
        } else {
            str[i] = tolower(str[i]);  // Convert to lowercase
        }
        i++;
    }
}

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string with spaces

    // Convert the string to title case
    toTitleCase(str);

    // Output the result
    printf("Title Case: %s\n", str);

    return 0;
}
