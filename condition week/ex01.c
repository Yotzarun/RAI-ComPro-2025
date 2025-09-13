#include <stdio.h>

int main() {
 int i, num, sum=0;
 float avg;

 for(i = 1; i<=10; i++)
 {
    printf("Enter the number:");
    scanf("%d", &num);
    // printf("\n");
    sum = sum + num;
 }

 avg = sum/10;

 printf("Total sum is%d\n", sum);
 printf("Average is%.2f\n", avg);



}