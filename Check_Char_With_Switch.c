/*
    Enter any character: d
    d is a Consonant
*/
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch, oldCh;
    printf("Enter any character: ");
    scanf("%c",&ch);
    oldCh = ch;
    ch=tolower(ch);

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
                printf("%c is a Vowel",oldCh);
                break;
        default :
            if(ch>='a'&& ch<='z'){
                printf("%c is a Consonant",oldCh);
            }
            else{
                printf("%c is not a character",oldCh);
            }
    }

    
    return 0;
}