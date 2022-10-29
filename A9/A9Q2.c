#include<stdio.h>

int main(){
    int S1, S2, S3, S4, S5;
    printf("Enter the marks of each subject: ");
    scanf("%d %d %d %d %d", &S1, &S2, &S3, &S4, &S5);
    
    if (S1>=33&&S1<=100)
    {
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }
    if (S2>=33&&S2<=100)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    if (S3>=33&&S3<=100)
    {
        printf("Pass\n");
    }
    else 
    {
        printf("Fail");
    }
    if (S4>=33&&S4<100)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    if (S5>=33&&S5<=100)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    
    int total_marks;
    total_marks = S1+S2+S3+S4+S5;
    
    if (total_marks>=165 && total_marks<=500)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
    
    return 0;
}