#include<stdio.h>
int main(){
	int sp,cp,profit,loss;
	printf("enter the cost price");
	scanf("%d",&cp);
	printf("enter the selling price");
	scanf("%d",&sp);
	profit=(sp-cp)*100/sp;
	loss=(cp-sp)*100/cp;
	if(profit>0)
{
	printf("profit %d",&profit);
}
    else
    {
    	printf("loss:%d",&loss);
	}
	return 0;
}
