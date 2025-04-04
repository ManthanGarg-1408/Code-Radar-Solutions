
int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size - 1;
    while(low<=high){
        mid = (low+high) / 2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
