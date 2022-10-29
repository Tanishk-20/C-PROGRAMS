#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the sides of  traingle a, b ,c");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c)
    {
        printf("the traingle is valid");
    }
    else
    {
        printf("the traingle is invalid");
    }
    return 0;
    

}