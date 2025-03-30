#include<stdio.h>
int isSorted(arr[n],n){
    for (int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
        return 1;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(isSorted(arr[n],n)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}