#include <stdio.h>
#include <stdlib.h>

int main()  {
 
    int count = 1, num, sum =0;

    do
    {

     printf("Enter the number:");
     scanf("%d", &num);
     if (num == 0)
    {
    printf("Exitting Program....bye\n");
    exit(0);
    
    }
    
    else if (num % 2 == 0)

     {
      printf("%d is even\n", num);
     }

    else 

    {
        printf("%d is odd\n", num);
    }
    } while ((num != 0));

    // while ((num != 0)); {
    // printf("Enter the number:");
    // scanf("%d", &num);

    // if (num % 2 == 0)
    // {
    // printf("%d is even", num);
    // }
    
    // else if (num == 0)

    //  {
    //   printf("Exitting Program....bye");
    //  }

    // else 

    // {
    //     printf("%d is odd", num);
    // }




}