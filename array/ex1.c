#include <stdio.h>

int main()  {

    int value[10], i ;

    for (i=1;i<10;i++)
    {

    printf("Enter the value %d here:", i);
    scanf("%d", &value[i]);
    }
     
    printf("Values in array are:");
     for (i=1;i<10;i++)
     {
    
    printf("%d,",value[i]);
     }
}
