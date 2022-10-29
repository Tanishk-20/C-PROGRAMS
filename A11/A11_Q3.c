#include <stdio.h>

int main()
{
    int counter;
    printf("Enter no. of times you want to to print \"Hello World\": ");
    scanf("%d", &counter);

    while (counter > 0)
    {
        printf("Hello World\n");
        counter = counter - 1;
    }
    return 0;
}
