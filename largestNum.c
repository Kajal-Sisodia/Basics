#include<stdio.h>
int main(){
    int a,b,c,g=0;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    g=(a>b)?(a>c)?a:c : (b>c) ? b : c;
    printf("Largest Number is %d",g);
    return 0;
}