
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    // Read a sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character at the end of the sentence (if any)
    sentence[strcspn(sentence, "\n")] = '\0';

    // Tokenize the sentence into words
    char *word = strtok(sentence, " ");

    // Print each word in a new line
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");  // Get the next word
    }

    return 0;
}
