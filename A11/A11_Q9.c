#include<stdio.h>

int main(){
    int n;
    printf("enter a natural number: ");
    scanf("%d",&n);
    for (int i = n; i > 0; i=i-1)
    {
        printf("%d\n", i);
    }
    
    return 0;
}