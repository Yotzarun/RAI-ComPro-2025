#include <stdio.h>

int main()  {
 int i = 1, num, sum=0;
 float avg;
 
 
 while((i<=10))
 {
    printf("Enter the number:");
    scanf("%d", &num);
    sum = sum + i;
     i++;
 }

 
 printf("Total sum is %d\n", sum);
 



}