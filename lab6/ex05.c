#include <stdio.h>


int main()  {

    int mk[5],i, total=0, highest=0, smallest = 1000;

    for(i=1;i<=5;i++)
    {
        printf("Enter the marks of the student %d:",i);
        scanf("%d", &mk[i]);
    }    

    for(i=1;i<=5;i++)
    {
        if (mk[i] > highest)
        {
            highest = mk[i];
        }

    }
    for(i=1;i<=5;i++)
    {
        if (mk[i] < smallest)
        {
            smallest = mk[i];
        }

    }
       

  
  printf ("Smallest Marks:%d", smallest);
  printf ("\nLargest Marks:%d", highest);


}