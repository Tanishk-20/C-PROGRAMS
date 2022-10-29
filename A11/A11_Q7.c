#include<stdio.h>

int main(){
    int a, b;
    printf("ENTER A NUMBER: ");
    scanf("%d", &a);
    b = a % 10;

    printf("%d\n", a-b);
    return 0;
}