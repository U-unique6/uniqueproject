#include <stdio.h>
#include <conio.h>
int main ()
{
    int x;
    printf("enter the no.\n");
    scanf("%d", &x);

    if ( x%2==0)
    {
        printf("your entered no. is postive\n");

    }
    else 
{
    printf("your entered no. is negative\n");

}
return 0;
}