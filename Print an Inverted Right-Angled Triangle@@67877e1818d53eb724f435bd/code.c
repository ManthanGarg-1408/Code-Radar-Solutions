#include <stdio.h>
int main() {
    int N;
    char ch=="*";
    scanf("%d",&N);
    for (int i=N;i>0;i--){
        for (int j=0;j<i;j++){
        printf("%c",ch);
    }}
    return 0;
}