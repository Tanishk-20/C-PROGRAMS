#include<stdio.h>
int main(){
    int salary;
    int da;
    int grosal;
    printf("enter salary :-");
    scanf("%d",&salary);
    da=salary*0.4;
    printf("da of  the employee %d \n",da);
    grosal=da+salary;
    printf("gross salary is %d\n",grosal);
    return 0;

}