#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; 
    
    // Check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return 0; // Not a prime number
    }
    return 1; // Prime number
}

int main() {
    int n;
    
    // Taking input
    scanf("%d", &n);

    // Check prime using function
    if (isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
