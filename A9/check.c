#include <stdio.h>

int main()
{
    int per, choice;
    printf("Enter your percentage: ");
    scanf("%d", &per);

    if (per >= 75 && per < 75)
    {
        printf("First Division\n");
        printf("Enter Your Choice\n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("NO CHOICE\n");
        }
        if (choice == 1)
        {
            printf("SCIENCE\n");
        }
        if (choice == 2)
        {
            printf("Humanities");
        }
        if (choice == 3)
        {
            printf("Converse\n");
        }
        else
        {
        }
    }
    else
    {
        printf("your percentage is not getting first division");
    }

    return 0;
}