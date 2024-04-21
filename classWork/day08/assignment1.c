/*Check whether a given number can be expressed as the sum of two prime number*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the number of ways a given number can be expressed as the sum of two prime numbers
int findNumberOfWays(int num) {
    int count = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            count++;
        }
    }
    if (count == 0) {
        return -1;
    }
    return count;
}

int main() {
    int num;

    // Read the positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find the number of ways the given number can be expressed as the sum of two prime numbers
    int numberOfWays = findNumberOfWays(num);

    // Print the number of ways
    if (numberOfWays == -1) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    } else {
        printf("%d = ", num);
        for (int i = 2; i <= num / 2; i++) {
            if (isPrime(i) && isPrime(num - i)) {
                printf("%d + %d", i, num - i);
                count++;
                if (count < numberOfWays) {
                    printf(", ");
                }
            }
        }
        printf("\nNoofWays = %d\n", numberOfWays);
    }

    return 0;
}