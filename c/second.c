#include <stdio.h>

int fibonacci(int);
int main()
{
    int n, i=0 , number;
    printf("enter the number of element\n");
    scanf("%d", &n);
    printf("fibonacci series\n");
   
    for (number=1; number<=n; number++);
    {
      
        printf("%d\n", fibonacci(i));
        i++;

    }
    return 0;
}
int fibonacci(int n{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else 
    return (fibonacci(n-1)+ fibonacci(n-2));
    
}