#include<stdio.h>

int main(){
    int counter;
    printf("Enter the number of times you want to print Hello World: ");
    scanf("%d", &counter);

    for (int i = 0; i < counter; i++)
    {
        printf("Hello World\n");
    }
    
    return 0;
}