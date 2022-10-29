#include<stdio.h>

int main(){
    int a, b;
    printf("enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    if (a>b && a>=500 &&  a<=1000)
    {
        printf("Greatest number is %d", a);
    }
    else if (b>a && b>=500 && b<=1000)
    {
        printf("Greatest number is %d", b);
    }
    else{
        printf("Not Available");
    }


    return 0;
}