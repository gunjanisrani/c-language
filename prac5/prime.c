/* Q] Write a program in C to accept a number from user and check whether the number is prime*/

#include <stdio.h>

int main() {
    int num, i;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        printf("%d is not a prime number.\n", num);
        return 0; // End program early as numbers < 2 are not prime
    }

    // Check divisors from 2 to sqrt(num)
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0; // Exit the loop and program since it's not prime
        }
    }

    // If no divisors are found, it's a prime number
    printf("%d is a prime number.\n", num);

    return 0;
}	    	
