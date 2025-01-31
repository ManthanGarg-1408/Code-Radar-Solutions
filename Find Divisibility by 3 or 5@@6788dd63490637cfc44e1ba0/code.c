#include <stdio.h>
int main() {
    float a;
    scanf("%f",&a);
    if (a%3==0 && a%5==0){
        printf("Divisible by Both");
    }else if (a%3==0 && !(a%5==0)){
        printf("Divisibe by 3");
    }else if (a%5==0 && !(a%3==0)){
        printf("Divisible by 5");
    }else{
        printf("Not Divisible");
    }
    return 0;
}