#include<stdio.h>
int main(){
    int  l;
    int b;
    int Rperi;
    printf("enter the length of rectangle :-");
    scanf("%d",&l);
    printf("enter the breadth of the rectangle:-");
    scanf("%d",&b);
    Rperi=2*(l+b);
    printf("perimeter of rectangle is :%d",Rperi);
    return 0;
    
}