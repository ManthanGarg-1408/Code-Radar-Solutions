#include <stdio.h>
int main() {
    int a,b;
    scnaf("%d %d",&a,&b);
    if (a>0){
        print("%d",a);
    }else{
        printf("%d",b);
    }
    return 0;
}