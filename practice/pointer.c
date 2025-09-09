#include<stdio.h>
int main()

{
    int i = 10;
    int *p;
    p = &i;

    printf("%p %d\n",&i, i);
    printf("%p %p %d\n",&p, p, *p);
}