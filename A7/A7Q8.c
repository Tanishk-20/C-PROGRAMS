#include <stdio.h>
#include <math.h>

 int main() {
    int a, b, c, discriminant;
    printf("Enter coefficients a: ");
    scanf("%d", &a);
    printf("Enter coefficients b: ");
    scanf("%d", &b);
    printf("Enter coefficients c: ");
    scanf("%d", &c);
    discriminant = b*b - (4*a*c);
    if (discriminant > 0)
    {
        printf("roots are real and distinct");
    }
    else
    {
	
    printf("roots are imaginary");
}
   

    return 0;
} 
