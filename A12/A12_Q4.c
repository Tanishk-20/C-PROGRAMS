#include<stdio.h>

int main(){
    int a,N;
    N=1;
    int i = 1;
    printf("Enter the number to calculate factorial of that number: ");
    scanf("%d",&a);

    while (i<=a)
    {   

        N=N*i;
        i++;

    }
    printf("Factorial is: %d", N);
    
    return 0;
}