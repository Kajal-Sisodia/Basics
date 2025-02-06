
// #include<stdio.h>
// int main(){
//     int n, sum=0;
//     printf("Enter number of terms: ");
//     scanf("%d",&n);
    
//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     printf("Sum is %d",sum);
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    
    sum = (n*(n+1))/2;
    printf("Sum is %d",sum);
    
    return 0;
}