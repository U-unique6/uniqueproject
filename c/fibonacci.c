#include <stdio.h>
#include <conio.h>
unsigned fibo(int num);
int main()
{int num;
unsigned fibonacci;
    printf("enter the find nth fibonacci term \n");
    scanf("%d", &num);
   fibonacci= fibo(num);
   printf("%d fibonacci term is %lu", num ,fibonacci);
    return 0;
}
unsigned  fibo(int num)
{if (num ==0)
return 0;
else if (num == 1)
return 1; 
else 
return fibo(num-1)+ fibo(num-2);
}
