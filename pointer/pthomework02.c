#include<stdio.h>

int main()

{

    float x = 10, y= 5;

    float *p = &x;
    float *q = &y;

 printf("%.1f %.1f", x, y);

    float z;
    z = *p;
    *p = *q;
    *q = z;

printf("\n%.1f %.1f", x, y);


}