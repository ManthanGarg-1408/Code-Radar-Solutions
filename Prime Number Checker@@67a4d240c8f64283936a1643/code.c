
// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; // Not prime if n is 1 or less
    
    // Check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return 0; // Not a prime number
    }
    return 1; // Prime number
}

