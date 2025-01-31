#include <stdio.h>
#include<ctype.h>
int main() {
    char a;
    scanf("%c",&a);
    if (isvowel(a)){
        printf("Vowel");
    }else if (isdigit(a)){
        printf("Digit");
    }else if (isconsonant(a)){
        printf("Consonant");
    }else{
        printf("SpecialCharacter");
    }
    return 0;
}