// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // print stars
        for (int i=0;i<=N;i++){
            for (int j=0;j<=N;j++){
                printf("*");
            }
        }
    
    
    
    
        return 0;
    }
    }