// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Rows
        for (int j = 1; j <= i; j++) {  // Numbers in each row
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
