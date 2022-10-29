#include <stdio.h>
int main()
{
  int a,b;

  printf("enter first variable a:\n ");
  scanf("%d",&a);
  printf("enter the second variable b:\n");
  scanf("%d",&b);
  if(a>b)
  {
    printf("a is largest :\n");
  }
  else if(a<b)
  {
    printf("b is largest :\n");
  }
  else
  {
    printf("first variable is equal to second variable");
  }
  return 0;
}
