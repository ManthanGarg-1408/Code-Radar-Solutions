#include<stdio.h>
int main(){
    int n;
    int a;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            a++;
            printf("%d ",a);
        }
        printf("\n");
    }
        return 0;
}