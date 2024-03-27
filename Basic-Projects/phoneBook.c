#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for a contact
typedef struct {
    char name[50];
    char number[15];
} Contact;

// Define structure for a linked list node
typedef struct Node {
    Contact contact;
    struct Node *next;
} Node;

Node *head = NULL;  // Head of the linked list

// Function to add a new contact to the phone book
void addContact(char *name, char *number) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    strcpy(newNode->contact.name, name);
    strcpy(newNode->contact.number, number);
    newNode->next = head;
    head = newNode;
}

// Function to search for a contact by name
void searchContact(char *name) {
    Node *current = head;
    while (current != NULL) {
        if (strcmp(current->contact.name, name) == 0) {
            printf("Contact found: %s - %s\n", current->contact.name, current->contact.number);
            return;
        }
        current = current->next;
    }
    printf("Contact not found.\n");
}

// Function to display the menu
void displayMenu() {
    printf("\nPhone Book Menu\n");
    printf("1. Add Contact\n");
    printf("2. Search Contact\n");
    printf("3. Exit\n");
}

int main() {
    int choice;
    char name[50], number[15];

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter contact name: ");
                scanf("%s", name);
                printf("Enter contact number: ");
                scanf("%s", number);
                addContact(name, number);
                break;
            case 2:
                printf("Enter contact name to search: ");
                scanf("%s", name);
                searchContact(name);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
