#include<stdio.h>
int main(){
    int n,i,M,result=0, digit=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    M=n;
    while(n>0){
        digit = n%10;
        result = result*10 + digit;
        n = n/10;
    }
    if(result == M){
        printf("%d is a Palindrome Number",result);
    }
    else{
        printf("%d is not a Palindrome Number",result);
    }
    
    return 0;
}