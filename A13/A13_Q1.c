#include<stdio.h>

int main(){
    int month;
    printf("Enter the month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    {
        printf("31 Days in January");
        break;
    }
    case 2:
    {
        printf("28 or 29 Days in February");
        break;
    }
    case 3:
    {
        printf("31 Days in March");
        break;
    }
    case 4:
    {
        printf("30 Days in April");
        break;
    }
    case 5:
    {
       printf("31 Days in May");
       break;
    }
    case 6:
    {
        printf("30 Days in June");
        break;
    }
    case 7:
    {
        printf("31 Days in July");
        break;
    }
    case 8:
    {
        printf("31 Days in August");
        break;
    }
    case 9:
    {
        printf("30 Days in September");
        break;
    }
    case 10:
    {
        printf("31 Days in October");
        break;
    }
    case 11:
    {
        printf("30 Days in November");
        break;
    }
    case 12:
    {
        printf("31 Days in December");
        break;
    }
    default:
    {    
        printf("Invalid");
        break;
    }
        
    }

    return 0;
}