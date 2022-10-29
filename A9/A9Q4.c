#include<stdio.h>

int main(){
    int n;
    printf("enter a value: ");
    scanf("%d", &n);

    if (n>0)
    {
        printf("Positive\n");
    
    if (n%10==0)
    {
        printf("It is divisible by 10");
    }
    else{
        printf("It is not divisible by 10");
    }
    }
    else if (n<0)
    {
        printf("Negative");
    }

    else if (n==0)
    {
        printf("Zero");
    }

    else{}
    
    
    return 0;
}