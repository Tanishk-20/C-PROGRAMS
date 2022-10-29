#include<stdio.h>
int main(){
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int aggmarks;
    printf("enter the marks of sub1");
    scanf("%d",&sub1);
    printf("enter the marks of sub2\n");
    scanf("%d",&sub2);
    printf("enter the marks of the sub3\n");
    scanf("%d",&sub3);
    printf("enter the marks of sub4\n");
    scanf("%d",&sub4);
    printf("enter the marks of the sub5\n");
    scanf("%d",&sub5);
    aggmarks=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("the aggregate marks is :\n%d",aggmarks);
    return 0;
}