#include <stdio.h>
int main() {
    int N;
    char ch=="*";
    scanf("%d",&N);
    for (int i=0,i<=N,i++){
        printf("%c",ch*i);
    }
    return 0;
}