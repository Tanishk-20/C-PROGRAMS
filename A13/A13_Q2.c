#include<stdio.h>

int main(){
    int a, b, choice;
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
    {
        printf("%d", a+b);
        break;
    }
    case 2:
    {
        printf("%d", a-b);
        break;
    }
    case 3:
    {
        printf("%d", a*b);
        break;
    }
    case 4:
    {
        printf("%d", a/b);
        break;
    }
    default:
    {
       printf("Exit");
       break;
    } 
    }
    

    return 0;
}