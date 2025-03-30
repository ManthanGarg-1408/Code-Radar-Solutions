
void selectionSort(int arr[] ,int n){
    for(int i=0;i<n-1;i++){
        int SI = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SI]){
                SI = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[SI];
        arr[SI] = temp;
    }
}

void arrayprint(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
