#include<stdio.h>

int main(){
    printf("Squares of first 10 natural numbers:\n");
    for (int i = 1; i <= 10; i=i+1)
    {
        printf("%d\n", i*i);
    }
    
    return 0;
}