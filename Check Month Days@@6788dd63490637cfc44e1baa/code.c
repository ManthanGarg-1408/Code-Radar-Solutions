#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int x=31;
    int y=28;
    int z=30;
    scanf("%d",&a);
    switch (a):
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("%d \n",x);
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("%d \n",z);
    break;
    case 2:
    printf("%d \n",y);
    break;
    default:
    printf("Invalid month");
    break;
    return 0;
}