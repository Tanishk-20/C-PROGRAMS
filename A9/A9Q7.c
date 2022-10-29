#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter The Sides of Triangle a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && a == c)
    {
        printf("It is Equilateral Triangle");
    }
    else if (a == b && b != c || a == c && c != b || b == c && c != a)
    {
        printf("Is is Isosceles");
    }
    else
    {
        printf("It is scalane triangle");
    }

    return 0;
}