#include<stdio.h>
int main(){
	int a,b,n;
	printf("enter the value of a and b:");
	scanf("%d %d,",&a,&b);
	printf("enter your chioce :");
	scanf("%d",&n);
	if(n==1)
	{
	  printf("sum of a and b is :%d\n",a+b);
	}
	else if(n==2)
		{
		 printf("differnce of  a and b is %d\n",a-b);	
		}
    else if(n==3)
    {
    	printf("product of a and b is %d\n",a*b);
	}
	else if(n==4)
	{
		 printf("divsion of a and b is %d\n",a%b);
	}
	else
	{
		printf("please enter digit between  1 to 4  :");  
	}
	return 0;
	


}
