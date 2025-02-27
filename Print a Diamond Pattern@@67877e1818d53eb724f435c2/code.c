// Your code here...
#include <stdio.h>
int main{
    int N;
    scanf("%d",&N);
    for (int i=0;i<N+1;i++){
        for (int i=N;0;i--){
            printf(' ' * (rows - i) + '*' * (2 * i - 1));
        }
    }
    return 0;
}