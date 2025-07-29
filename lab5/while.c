#include<stdio.h>

int main() 
{
     int i = 1, final, sum=0;
     printf("Input Final Value :");
     scanf("%d", &final);
     while( (i<=final))
     {

       sum = sum + i;
       i++;
     }

     printf("sum of 1 to final is : %d\n", sum);

     
}


