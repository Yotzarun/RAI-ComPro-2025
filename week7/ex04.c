#include<stdio.h>
int main()

{

struct vector{
float u_x;
float u_y;
float v_x;
float v_y;
} v1;

printf("u_x:");
scanf("%f", &v1.u_x);

printf("u_y:");
scanf("%f", &v1.u_y);

printf("v_x:");
scanf("%f", &v1.v_x);

printf("v_y:");
scanf("%f",&v1.v_y);

float vx, vy;

vx = v1.u_x + v1.v_x;
vy = v1.u_y + v1.v_y;

printf("Resultant Vector is equvalence to %.1f + %.1f", vx, vy);

}