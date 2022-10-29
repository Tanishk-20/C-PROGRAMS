#include<stdio.h>

int main(){
    int N, a;
    a = 1;
    printf("Enter the number for factorial: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i = i + 1)
    {
        a = a * i;
    }
    printf("Factorial of %d is: %d", N, a);
    return 0;
}