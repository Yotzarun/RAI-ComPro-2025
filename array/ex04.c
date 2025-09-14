#include <stdio.h>

int main()  {

    int value[10], i , even=0, odd=0;

    for (i=1;i<10;i++)
    {

    printf("Enter the value %d here:", i);
    scanf("%d", &value[i]);
    
    
    
    if (value[i]%2 == 0 )
    {
    even++;
    }
    else {
    odd++;
    }
}

    printf("Even numbers; %d", even);
    printf("\nOdd numbers; %d", odd);
     }
