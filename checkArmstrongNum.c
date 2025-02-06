#include<stdio.h>
#include<math.h>
int main(){
    int n, M, r, result=0, digit=0;
    printf("Enter number: ");
    scanf("%d",&n);
    M=n;
    while(n>0){
        digit++;
        n = n/10;
    }
    n=M;
    while(n>0){
        r = n%10;
        result = result + pow(r,digit);
        n = n/10;
    }
    if(result == M){
        printf("%d is a Armstrong Number",result);
    }
    else{
        printf("%d is not an Armstrong Number",result);
    }
    
    return 0;
}