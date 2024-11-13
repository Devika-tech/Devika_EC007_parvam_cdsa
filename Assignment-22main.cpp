#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to find the middle element of the linked list
void findMiddle(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* slow = head;
    struct Node* fast = head;

    // Traverse the list with slow and fast pointers
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;        // Move slow by one step
        fast = fast->next->next;  // Move fast by two steps
    }

    // slow will now be pointing to the middle node
    printf("The middle element is: %d\n", slow->data);
}

// Function to add a new node at the end of the list
void append(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Adding some nodes to the linked list
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    // Print the linked list
    printf("The linked list is: ");
    printList(head);

    // Find the middle element
    findMiddle(head);

    return 0;
}
