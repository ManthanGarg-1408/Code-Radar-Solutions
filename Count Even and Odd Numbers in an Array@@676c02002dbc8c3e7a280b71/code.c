#include <stdio.h>

int main() {
    int N, even_count = 0, odd_count = 0;
    scanf("%d", &N);

    int arr[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Output: count of even and odd numbers
    printf("%d %d\n", even_count, odd_count);

    return 0;
}