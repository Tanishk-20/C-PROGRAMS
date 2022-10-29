#include<stdio.h>
int main(){
    int salary;
    int da;
    int ha;
    int totalsal;
    printf("enter the salary of aman:");
    scanf("%d",&salary);
    da=salary*0.5; //dearness allowance
    printf("da of aman %d\n",da);
    ha=salary*0.2; //hosue allowance
    printf("house rent allowance of aman %d\n",ha);
    totalsal=salary+da+ha;
    printf("total salary of aman %d\n",totalsal);
    return 0;
}
