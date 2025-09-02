#include<stdio.h>
#include<math.h>

int main()

{

struct co{
float x1;
float x2;
float y1;
float y2;
} c1;

printf("x1:");
scanf("%f", &c1.x1);

printf("x2:");
scanf("%f", &c1.x2);

printf("y1:");
scanf("%f", &c1.y1);

printf("y2:");
scanf("%f",&c1.y2);

float d;

d = sqrt(((c1.x2 - c1.x1)*(c1.x2 - c1.x1))+((c1.y2 - c1.y1)*(c1.y2-c1.y1)));

printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.1f unit", c1.x1, c1.y1, c1.y1, c1.y2, d);

}