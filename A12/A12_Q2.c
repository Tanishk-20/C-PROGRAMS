#include<stdio.h>

int main(){
    int N;
    int i = 1;
    printf("Enter the Natural Number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d ", i);
        i++;
    }
    
    return 0;
}