#include<stdio.h>

float CircleCirCum (int);
int main()

{

    int r;
    printf("Enter the radius in cm:");
    scanf("%d", &r);
    printf(" Circumference area = %.2f\n", CircleCirCum(r));

}

float CircleCirCum (int ra)
{
    float answer = 0;
    answer = 22.0/7.0*2*ra;
    return answer;
}