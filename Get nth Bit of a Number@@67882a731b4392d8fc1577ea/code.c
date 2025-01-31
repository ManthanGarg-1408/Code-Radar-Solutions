#include <stdio.h>
int main() {
    int num,n,bit;
    scanf("%d %d %d",&num,&n);
    bit=(num>>n)&1;
    printf("%d",bit);
    return 0;
}