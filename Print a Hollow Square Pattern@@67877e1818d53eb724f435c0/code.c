#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the input

    for (int i = 0; i < N; i++) {  // Loop for rows
        for (int j = 0; j < N; j++) {  // Loop for columns
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
