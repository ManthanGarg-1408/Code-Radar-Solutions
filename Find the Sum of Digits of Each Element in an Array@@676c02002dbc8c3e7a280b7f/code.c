// Your code here...

#include<stdio.h>
int main(){
    int n;int sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j=0;<n;j++){
        sum+=arr[j];
    }
    printf("%d",sum);
    return 0;
}