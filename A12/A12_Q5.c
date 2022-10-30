#include<stdio.h>

int main(){
    int a, b;
    int i;
    printf("Enter Number: ");
    scanf("%d", &a);
    b=a%10;

    while (i<b)
    {
        printf("%d\n",a-b);
        i++;
    }
    
    return 0;
}