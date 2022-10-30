#include<stdio.h>

int main(){
    int choice;
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {   
        int n;
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d is %d",n,-1*n);
        break;
    }
    
    default:
    {
        printf("Enter a valid number");
        break;
    }
    }
    return 0;
}