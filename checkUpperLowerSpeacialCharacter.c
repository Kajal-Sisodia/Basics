
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z'){
        printf("%c is a Lowercase Character",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c is a Uppercase Character",ch);
    }
    else{
        printf("%c is a Special Character",ch);
    }
    return 0;
}