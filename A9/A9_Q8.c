#include<stdio.h>  
 int main()    
{    
int a=5, b=10;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=15 (5+10)    
b=a-b;//b=5 (15-10)    
a=a-b;//a=10 (15-5)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
