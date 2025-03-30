#include<stdio.h>

int isSorted(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                return 0;
            }
    
        }
    }
    return 1;
}

int main(){
    int n,arr[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    if (isSorted(arr,n)){
        printf("Sorted\n");
    }
    else{
        printf("Not Sorted");
    }
}