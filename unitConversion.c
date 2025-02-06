
#include<stdio.h>
#include<ctype.h>
int main(){
    int choice;
    float value,result=0;

    printf("Enter the value: ");
    scanf("%f",&value);

    printf("1. centimetre to metre\n");
    printf("2. metre to centimetre\n");
    printf("3. kilometre to metre\n");
    printf("4. metre to kilometre\n");
    printf("5. Exit\n");

    printf("Enter choice (1-5): \n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            result = value/100.0;
            printf("%.2fcm is equals to %.2fm",value,result);
            
            break;
        
        case 2:
            result = value*100.0;
            printf("%.2fm is equals to %.2fcm",value,result);
            break;
        
        case 3:
            result = value*1000.0;
            printf("%.2fkm is equals to %.2fcm",value,result);
            break;

        case 4:
            result = value/1000.0;
            printf("%.2fm is equals to %.2fkm",value,result);
            break;

        default:
            printf("Invalid Choice");
    }
    
    return 0;
}