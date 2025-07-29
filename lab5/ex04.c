#include <stdio.h>

int main()  {

    int i, num, sum = 0;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("Multiplication Table for %d", num);
    for( i = 1; i<=12; i++)
        printf("%d x %d = %d\n",num,i, num*i);

}