#include<stdio.h>

int main ()

{

struct {

    int one;
    int two;
    int three;

} sq;


printf("enter first number :");
scanf("%d", &sq.one);

printf("enter two number :");
scanf("%d", &sq.two);

int sum = sq.one + sq.two;

int *p = &sq.three;

*p = sum;

printf("%d", sq.three);

}