#include<stdio.h>

int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    
    if (year%4==0&&year%100!=0)
    {
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    return 0;
}