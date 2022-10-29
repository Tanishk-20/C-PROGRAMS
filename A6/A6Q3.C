#include <Stdio.h>
int main()
{
    int a;
    int b;
    int sum;
    int sub;
    int product;
    int division;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    sum = a + b;
    printf("sum is %d\n", sum);
    sub = a - b;
    printf("subtraction is: %d\n", sub);
    product = a * b;
    printf("product is: %d\n", product);
    division = a / b;
    printf("divsion is: %d\n", division);
    return 0;
}
