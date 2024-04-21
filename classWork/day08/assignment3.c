/*
    .Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .       */

#include <stdio.h>

// Function to count the number of digits in the nth number
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Function to find the nth number and return its length
int findNthNumber(int n) {
    int digits[] = {1, 4, 6, 9};
    int permutations = 4; // Total permutations for a single digit
    int numberLength = 1; // Starting with single-digit numbers
    int totalNumbers = permutations; // Total numbers generated so far

    // Loop until we find the nth number
    while (n > totalNumbers) {
        // Move to the next higher length number
        numberLength++;
        // Calculate total permutations for the current length
        permutations *= 4;
        totalNumbers += permutations;
    }

    // Now we know the length of the nth number, we need to find the actual number
    int remainder = n - (totalNumbers - permutations);
    int nthNumber = 0;
    int multiplier = 1;

    // Construct the nth number
    while (remainder > 0) {
        int digitIndex = (remainder - 1) / multiplier % 4;
        nthNumber += digits[digitIndex] * multiplier;
        multiplier *= 10;
        remainder -= (remainder - 1) / multiplier * multiplier + 1;
    }

    // Return the length of the nth number
    return countDigits(nthNumber);
}

int main() {
    int T, N;

    // Read the number of test cases
    scanf("%d", &T);

    while (T--) {
        // Read the value of N
        scanf("%d", &N);

        // Find the nth number and print the number of digits
        int digitsInNthNumber = findNthNumber(N);
        printf("%d\n", digitsInNthNumber);
    }

    return 0;
}