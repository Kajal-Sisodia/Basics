#include<stdio.h>
int main(){
    int a,b,c;
    int a1,a2,a3;
    printf("Enter Sides of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter angles of the triangle: ");
    scanf("%d%d%d",&a1,&a2,&a3);

    if(a+b>c || a+c>b || b+c>a){
        if(a1+a2+a3==180){
            printf("It is a Valid Triangle");
        }
        else{
            printf("It is not a Valid Triangle");
        }
    }
    else{
        printf("It is not a Valid Triangle");
    }
    
    return 0;
}