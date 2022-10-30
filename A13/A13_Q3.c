#include<stdio.h>
int main(){
    printf(" 1: Burger\n 2: French Fries\n 3: Pizza\n 4: Sandwiches\n");
    int choice;

    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
    {
        int a;
        printf("Number of Burger: ");
        scanf("%d", &a);
        a=a*60;
        printf("Your Total bill is %drs.", a);
        break;
    }
    case 2:
    {
        int b;
        printf("Number of French Fries: ");
        scanf("%d", &b);
        b=b*50;
        printf("Your Total bill is %drs.", b);
        break;
    }
    case 3:
    {
        int c;
        printf("Number of Pizza: ");
        scanf("%d", &c);
        c=c*200;
        printf("Your Total bill is %drs.", c);
        break;
    }
    case 4:
    {
        int d;
        printf("Number of Sandwiches: ");
        scanf("%d", &d);
        d=d*35;
        printf("Your Total bill is %drs.", d);
        break;
    }

    default:
    {
        printf("Exit");
    }
        
    }
    
    return 0;
}