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
    // Check if number is exactly 2 (the

    return 0;
}