#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if (a%2==0)
    {
        printf("Even\n");
    
    if (a % 3 == 0 && a % 2 == 0)
    {
        printf("It is divisible by 3 and 2\n");
    }
    else{
        printf("It is not divisible");
    }
    
    }

    else 
    {
        printf("Odd\n");
    if (a % 5 == 0)
    {
        printf("It is divisible by 5\n");
    }
    else{
        printf("It is not divisible");
    }
    }
    
    
   
    return 0;
}