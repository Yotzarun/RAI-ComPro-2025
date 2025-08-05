#include <stdio.h>


int main()  {

    int mk[5],i, total=0, highest=0;

    for(i=1;i<=5;i++)
    {
        printf("Enter the marks of the student %d:",i);
        scanf("%d", &mk[i]);
        total = total + mk[i];
    }

    for(i=1;i<=5;i++)
    {
        if (mk[i] > highest)
        {
            highest = mk[i];
        }

    }
       

  
  printf ("Total Marks:%d", total);
  printf ("\nHighest Marks:%d", highest);






    
    
}