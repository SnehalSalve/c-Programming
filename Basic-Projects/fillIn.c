#include <stdio.h>
#include <string.h>

int main() {
    // Define the original string
    char original[] = "Snehal";
    // Define the pattern with blanks
    char pattern[] = "S_e_al";
    // Define a buffer to store the filled string
    char filled[10];

    // Print the pattern with blanks
    printf("Fill in the blanks: %s\n", pattern);

    // Prompt the user to enter the missing characters
    printf("Enter the missing characters: ");
    scanf("%s", filled);

    // Loop through the pattern and fill in the blanks
    for (int i = 0, j = 0; i < strlen(pattern); i++) {
        if (pattern[i] == '_') {
            pattern[i] = filled[j++];
        }
    }

    // Print the complete string
    printf("Complete string: %s\n", pattern);

    // Print the original string
    printf("Original string: %s\n", original);

    return 0;
}
