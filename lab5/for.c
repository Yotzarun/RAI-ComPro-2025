#include<stdio.h>

int main() 
 { 
   int sum = 0, count;
   for (count=1; count<=100;count++)
   if(count % 2 == 0)

   {
      sum = sum + count;
   }

printf("Summation of even numbers from 1 to 100 = %d", sum);
return 0;
 }