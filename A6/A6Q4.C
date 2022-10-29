#include<stdio.h>
int main(){
    int km;
    int centimeter;
    int milimeter;
    float inches;
    printf("enter the distance between two cities in km :");
    scanf("%d",&km);
    centimeter=km*100000; //converting km into centimeter
    printf("convert km  into centimeter %d \n",centimeter);
    milimeter=km*10000000;
    printf("converted km into milimeter :%d\n",milimeter);
    inches=km*39370;
    printf("convert km into inches %f",inches);
    return 0;
}