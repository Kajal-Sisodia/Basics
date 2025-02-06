// #include<stdio.h>
// int main(){
//     char ch;;
//     printf("Enter any character: ");
//     scanf("%c",&ch);
//     if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//         printf("**** %c is a Vowel ****",ch);
//     }
//     else {
//         printf("**** %c is a Consonant ****",ch);
//     }
    
//     return 0;
// }

#include<stdio.h>
#include<ctype.h>
int main(){
    char ch, oldCh;
    printf("Enter any character: ");
    scanf("%c",&ch);
    oldCh = ch;
    ch=tolower(ch);
    if(ch>='a' && ch<='z'){
        if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("**** %c is a Vowel ****",oldCh);
        }
        else{
            printf("**** %c is a Consonant ****",oldCh);
        }
    }
    else{
        printf("**** %c is not a character ****",oldCh);
    }
    
    return 0;
}