#include<stdio.h>

int main()

{
    int a = 0;

    int b = 5;

    int *pa = &a;

    int *pb = &b;
    printf("Before Reverse: a = %d, b = %d\n", a, b);

    int w;

    w = * pa;

    *pa =*pb;

    *pb = w;
    printf("After reverse: a = %d, b = %d\n", a, b);
 return 0;
}