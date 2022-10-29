#include<stdio.h>
int main(){
    int km;
    int meter;
    printf("enter the distance between two cities in km :");
    scanf("%d",&km);
    meter=km*1000; //converting km into meter
    printf("convert km  into meter %d ",meter);
    return 0;
}