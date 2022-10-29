#include <stdio.h>

int main()
{
    int a, n, m;
    printf("enter the number for pairs: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("Value of pairs: ");
        scanf("%d %d", &m, &n);
        printf("Addition is: %d\n", n + m);
    }

    return 0;
}