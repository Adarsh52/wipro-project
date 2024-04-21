/*
     C Program to Remove all Characters in Second String which are present in First String
i/p
Bhima shankar is a C programmeC
o/p
Bhima snkr is a C programme    */



#include <stdio.h>
#include <string.h>

// Function to remove all characters of str1 from str2
void removeChars(char *str1, char *str2) {
    int i, j, len1 = strlen(str1), len2 = strlen(str2);

    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '\0'; // Set the character to null, effectively removing it
                break;
            }
        }
    }

    // Reconstruct the string without the removed characters
    int index = 0;
    for (i = 0; i < len2; i++) {
        if (str2[i] != '\0') {
            str2[index++] = str2[i];
        }
    }
    str2[index] = '\0'; // Null-terminate the reconstructed string
}

int main() {
    char str1[100], str2[100];

    // Read the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove the newline character if present

    // Read the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove the newline character if present

    // Remove characters from the second string
    removeChars(str1, str2);

    // Print the modified second string
    printf("Resultant string: %s\n", str2);

    return 0;
}