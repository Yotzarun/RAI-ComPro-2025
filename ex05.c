#include<stdio.h>

int main() 
{

    int h, b ;
    float v ;

    printf("\nEnter cone hight:");
    scanf("%d", &h);

    printf("Enter cone base radius:");
    scanf("%d", &b);

    v = ((3.14 * b * b) * h) / 3;
    
    printf("cone volume = %.1f:", v);

    if (v > 260) {

        printf("\nThis cone is perfect for Supun project");
    }

}