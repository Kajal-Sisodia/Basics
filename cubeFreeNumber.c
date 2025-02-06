/*
Enter the number: 108
a=3, b=4
*/
#include<stdio.h>
#include<math.h>

int isCube(int n){
    for(int i=2; i<cbrt(n); i++){
        if(n%(i*i*i)==0){
            return 0;
        }
    }
}
void findAandB(int n){
    for(int a=1; a<=cbrt(n); a++){
        int a3 = a*a*a;  //calculate a3
        if(n%a3==0){
           int b=n/a3;  //calculate b
           if(isCube(b)){
            printf("a=%d, b=%d\n",a,b);
           }
        }
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    findAandB(n);
    return 0;
}