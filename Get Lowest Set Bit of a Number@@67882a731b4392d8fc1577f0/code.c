#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int lsb = num & -num;
    printf("%d",lsb);
    return 0;
}