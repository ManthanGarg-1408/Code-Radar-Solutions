#include <stdio.h>
int main() {
int num, i, isPrime = 1;  // Flag to check if the number is prime

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is less than or equal to 1
    if (num <= 1) {
        isPrime = 0;  // Not a prime number
    }
    // Check if number is exactly 2 (the only even prime number)
    else if (num == 2) {
        isPrime = 1;  // 2 is a prime number
    }
    // Check for divisibility for numbers greater than 2
    else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Number is divisible, hence not prime
                break;
            }
        }
    }

    // Output result based on the flag isPrime
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}