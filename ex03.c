#include<stdio.h>

int main() 
{

    int a;


    printf("Enter a number:");
    scanf("%d", &a);

    switch(a<=100)
    {
        case 0:
        printf("%d is out of range", a);
        break;

        case 1:
        
          switch(a % 2 )
          {

          case 0:
          printf("%d is even", a);
          break;

          case 1:
          printf("%d is odd", a);
          break;
        }

        

        
    }
}
    
   
    
    
