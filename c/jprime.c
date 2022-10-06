// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n ;
   int i  ;
   int m=0; 
   int flag  = 0;
   printf("enter the number to check prime number\n");
   scanf("%d", &n);
   m=n/2;
   for (i=2; i<=m; i++){
       
       if (n%i=0)
       { printf("number is not prime\n");
       flag=1; 
       break;
   }
       
   }
   if (flag==0)
  {printf("number is prime\n");
  }
    return 0;
}