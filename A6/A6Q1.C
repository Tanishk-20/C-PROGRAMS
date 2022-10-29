#include<stdio.h>
void rectangle();
void circle();
void square();
void peritraingle();
int main(){
    rectangle(); //function call
    circle();//function call
    square();  //function call
    peritraingle(); //function call
return 0;
}
void rectangle(){
  int l;
  int b;
  int Rarea;
  int Rperi;
  printf("area and perimeter of rectangle:\n");
  printf("enter the length of rectangle:\n");
  scanf("%d",&l);
  printf("enter the breadth of rectangle \n");
  scanf("%d",&b);
  Rarea=l*b;
  Rperi=2*(l+b);
  printf("area of rectangle %d \n",Rarea);
  printf("perimeter of rectangle %d \n",Rperi);

 } 
 void circle(){
  int r;
  int Carea;
  int Ccirm;
  int pi=3;
  printf("area and circumference of circle\n");
  printf("enter radius of circle\n",r);
  scanf("%d",&r);
  Carea=pi*r*r;
  printf("\narea of circle %d\n",Carea);
  Ccirm=2*pi*r;
  printf("\ncircumference of circle %d\n",Ccirm);
 }
 void square(){
  int side;
  int Sarea;
  int Speri;
  printf("enter side of square:\n");
  scanf("%d",&side);
  Sarea=side*side;
  printf("area of square:%d\n",Sarea);
  Speri=4*side;
  printf("perimeter of square:%d\n",Speri);
 }
void peritraingle(){
    int s1;
    int s2;
    int s3;
    int peritraingle;
    printf("enter the first side of traingle ");
    scanf("%d",&s1);
    printf("enter the second  side of the traingle :");
    scanf("%d",&s2);
    printf("enter the third side of the traingle:");
    scanf("%d",&s3);
    peritraingle=s1+s2+s3;
    printf("sum of the side of traingle :%d",peritraingle);
    
}
 
