#include <stdio.h>

int main()  {

    int i, num, sum = 1;

    printf("Enter a number:");
    scanf("%d", &num);

    
    for( i = 1; i<=num; i++)
        sum = sum*i;
    printf("Factorial of %d is %d", num, sum);

}