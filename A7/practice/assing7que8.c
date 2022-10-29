#include<stdio.h>
int main(){
	int b,a,c,discriminant;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	discriminant=b*b-4*a*c;
	printf("roots are: %d\n",discriminant);
	if(discriminant>0)
	{
		printf("real and unequal roots:");
	}
	else
	{
		printf("real and equal roots");
	}
	return 0;
}
