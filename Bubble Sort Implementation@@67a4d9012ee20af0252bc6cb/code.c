// Your code here...

#include<stdio.h>
void bubblesort(int arr[],int n){
    int swapped;
    for(int i=0;i<n-1;i++){
        swapped = 0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            return;
        }
    }
}

void  arrayprint(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {4,1,5,2,3,8,0};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    arrayprint(arr,n);
    return 0;
}