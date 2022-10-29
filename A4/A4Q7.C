#include<stdio.h>
int main(){
    int km;
    int centimeter;
    printf("enter the distance between two cities in km :");
    scanf("%d",&km);
    centimeter=km*100000; //converting km into centimeter

    printf("convert km  into meter %d ",centimeter);
    return 0;
}