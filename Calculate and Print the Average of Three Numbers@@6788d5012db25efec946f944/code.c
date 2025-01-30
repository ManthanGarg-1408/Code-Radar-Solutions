#include <stdio.h>


int main() {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    int avg=a+b+c/3;
    printf("Average: %f",avg);
    return 0;
}