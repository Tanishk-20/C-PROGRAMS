#include<stdio.h>

int main(){
    int N;
    printf("Enter the natural number: ");
    scanf("&d",&N);
    int i=N;
    while (i>0)
    {
        printf("%d\n", i);
        i=i-1;
    }
    
    return 0;
}