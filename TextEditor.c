#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME 50
#define MAX_CONTENT 1000

int main() {
    char filename[MAX_FILENAME];
    char content[MAX_CONTENT];

    printf("\nWelcome to the Text Editor\n");
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Read file content
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        printf("File '%s' found. Loading content...\n", filename);
        fgets(content, MAX_CONTENT, file);
        fclose(file);
    } else {
        printf("File '%s' not found. Creating a new file...\n", filename);
    }

    int choice;
    printf("\nMenu:\n");
    printf("1. View/Edit content\n");
    printf("2. Save and exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nFile Content:\n%s\n", content);
            printf("Enter new content (max %d characters):\n", MAX_CONTENT);
            scanf(" %[^\n]", content);
            break;
        case 2:
            file = fopen(filename, "w");
            if (file == NULL) {
                printf("Error opening file for writing.\n");
                return 1;
            }
            fprintf(file, "%s", content);
            fclose(file);
            printf("Changes saved. Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    return 0;
}
