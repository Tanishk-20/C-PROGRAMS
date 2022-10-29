#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    c=a%10;
    b=a%100;
    d=b/10;
    printf("value of once place digit is %d and value of tens place digit is %d\n",c,d);

    if (c==d)
    {
        printf("Both are equal\n");
    }
    else{
        printf("Not equal");
    }
    

    
    

    
    
    
    
    return 0;
}