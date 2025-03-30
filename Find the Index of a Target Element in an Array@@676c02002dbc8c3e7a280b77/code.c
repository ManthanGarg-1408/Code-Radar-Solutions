#include <stdio.h>

int main() {
    int N, T;
    
    // Read the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the target element
    scanf("%d", &T);
    
    // Find the index of the first occurrence
    int index = -1; // Initialize the index to -1 (not found)
    for (int i = 0; i < N; i++) {
        if (arr[i] == T) {
            index = i; // Set index to the current position
            break; // Exit the loop on first occurrence
        }
    }
    
    // Output the result
    printf("%d\n", index);
    
    return 0;
}