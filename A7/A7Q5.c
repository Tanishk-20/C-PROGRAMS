#include<stdio.h>

int main(){
    int a;
    printf("enter a number");
    scanf("%d", &a);

    if (a>0){
        printf("given number is postive");
    }
    else{
        printf("given number is negative");
    }
    return 0;
}