void findUnsortedSubarray(int arr[],int n){
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
    }
}

void  arrayprint(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
