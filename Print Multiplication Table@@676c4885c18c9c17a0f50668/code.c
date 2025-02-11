// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        printf("%d x %d = \n",N,i,N*i,N*i);
    }
    return 0;
}