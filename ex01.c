#include<stdio.h>

int main() 
{

    int a, b;

    printf("Enter a number:");
    scanf("%d", &a);

    printf("\nEnter a number:");
    scanf("%d", &b);

    if ( a == b)  {
        
        
        printf("Match");
    
    
    }

    else {
        
        printf("Does not match. Try again");
    
    }

}