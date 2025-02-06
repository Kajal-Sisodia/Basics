/* 
Enter number: 20
2  3  5  7  11  13  17  19 

*/
#include<stdio.h>
int main(){
    int n,i,j,f=0;
    printf("Enter number: ");
    scanf("%d",&n);
    
    for(i=2; i<=n; i++){
        f=0;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                f=1;
                break;  
            }
        }
        if(f==0){
            printf("%d  ",i);
        }
    }
    
    return 0;
}