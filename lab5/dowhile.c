#include<stdio.h>

int main() 
 {
     int count = 1, sum =0;
do
 {
     sum = sum + count;
     count++;
    
 }
while (count<=100);
printf("Summation of 1 to 100 = %d", sum);
return 0;

 }