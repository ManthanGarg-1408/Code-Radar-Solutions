#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;

    // Calculate the sum of digits
    while (num > 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;        // Remove the last digit
    }
    return sum;
}

int main() {
    int N;

    // Read the size of the array
    scanf("%d", &N);

    int arr[N];
    int result[N];

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of digits for each element
    for (int i = 0; i < N; i++) {
        result[i] = sumOfDigits(arr[i]);
    }

    // Output the results
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}