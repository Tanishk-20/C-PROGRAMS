#include<stdio.h>

int main(){
    int a,n,m;
    int i = 1;
    printf("Enter the number of pair: ");
    scanf("%d", &a);

    while (i <= a)
    {
        printf("value of pairs: \n");
        scanf("%d %d", &n, &m);
        printf("Addition is: %d\n1", n+m);
        i++;
    }
    
    return 0;
}