#include<stdio.h>
int main(){
int a,b,n;
printf("enter value first and second number");
scanf("%d %d",&a,&b);
printf("enter value of n:\n");
scanf("%d",&n);
if (n==1)
{
  printf("sum of two number is %d\n",a+b);
}
else if(n==2)
{
    printf("subtraction of two number is %d\n",a-b);

}
else if(n==3)
{
    printf("product of two number is %d",a*b);

}
else if(n==4)
{
    printf("division of two number is %d",a/b);
}
else{
    printf("enter number between 1 to 4");
}
}