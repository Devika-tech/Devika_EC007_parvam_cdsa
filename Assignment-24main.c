#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Book struct
struct Book {
    char title[100];
    char author[100];
    struct Book* next;
};

// Function to add a new book to the linked list
void addBook(struct Book** head, char* title, char* author) {
    // Allocate memory for a new book node
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));

    // Copy the title and author to the new book node
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);

    // Set the next pointer of the new book to NULL
    newBook->next = NULL;

    // If the list is empty, set the new book as the head of the list
    if (*head == NULL) {
        *head = newBook;
    } else {
        // Otherwise, add it at the end of the list
        struct Book* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newBook;
    }
}

// Function to display all books in the linked list
void displayBooks(struct Book* head) {
    struct Book* temp = head;
    if (temp == NULL) {
        printf("No books available.\n");
        return;
    }

    printf("Books in the list:\n");
    while (temp != NULL) {
        printf("Title: %s\n", temp->title);
        printf("Author: %s\n", temp->author);
        printf("---------------\n");
        temp = temp->next;
    }
}

int main() {
    struct Book* head = NULL; // Initially, the list is empty

    int choice;
    char title[100], author[100];

    while (1) {
        printf("1. Add a new book\n");
        printf("2. Display all books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                // Input the title and author of the book
                printf("Enter the title of the book: ");
                fgets(title, 100, stdin);
                title[strcspn(title, "\n")] = '\0'; // Remove newline character from title
                printf("Enter the author of the book: ");
                fgets(author, 100, stdin);
                author[strcspn(author, "\n")] = '\0'; // Remove newline character from author
                addBook(&head, title, author);
                break;

            case 2:
                // Display all books in the list
                displayBooks(head);
                break;

            case 3:
                // Exit the program
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
