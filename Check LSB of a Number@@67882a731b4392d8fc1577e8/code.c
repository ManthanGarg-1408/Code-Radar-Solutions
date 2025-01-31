#include <stdio.h>
int main{
    int a;
    scanf("%d",&a);
    lsb=a&1;
    if (lsb==1){printf("Set\n");}
    else{printf("Not Set");}
    return 0;
}