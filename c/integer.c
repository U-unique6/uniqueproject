#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("enter the num\n");
    scanf("%d", &num);
    if(num>=0)
    {
        printf("your number is positive\n");

    }
    else
    {
        printf("your number is negative\n");
    }
    return 0;
}