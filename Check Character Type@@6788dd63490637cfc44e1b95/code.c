#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){printf("Vowel");}
    else if (ch==isdigit(ch)){printf("Digit");}
    return 0;
}