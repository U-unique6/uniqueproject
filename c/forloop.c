#include <stdio.h>

int main() {
   int i , j , s;

   printf("what do you feel when you felt insecurity\n");
   scanf("%d", &s);
   for (i = 1 ; i<=10; i++){
   for(j=10; j>=i; j--)
   { 
       printf(" ");

   }
   for ( int k =1 ; k<=i; k++){
       printf("");
   }
       printf(" \n");
    
   }
    return 0;
}