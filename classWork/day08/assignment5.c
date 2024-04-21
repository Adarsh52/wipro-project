/*
       alternativel merge two strings
i/p
Bhima
ABCDEOLM
o/p
BAhBiCmDaEOLM    */

#include <stdio.h>
#include <string.h>

// Function to merge two strings by interleaving their characters
void mergeStrings(char *str1, char *str2, char *result) {
    int len1 = strlen(str1), len2 = strlen(str2), i, j, k;

    // Iterate through the shorter string
    if (len1 > len2) {
        for (i = 0; i < len2; i++) {
            result[2 * i] = str2[i];
            result[2 * i + 1] = str1[i];
        }
        // Add the remaining characters from the longer string
        for (j = len2; j < len1; j++) {
            result[2 * len2 + j - len2] = str1[j];
        }
    } else {
        for (i = 0; i < len1; i++) {
            result[2 * i] = str1[i];
            result[2 * i + 1] = str2[i];
        }
        // Add the remaining characters from the longer string
        for (j = len1; j < len2; j++) {
            result[2 * len1 + j - len1] = str2[j];
        }
    }

    // Null-terminate the result string
    result[2 * len1 + len2] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    // Read the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove the newline character if present

    // Read the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove the newline character if present

    // Merge the strings
    mergeStrings(str1, str2, result);

    // Print the merged string
    printf("Merged string: %s\n", result);

    return 0;
}