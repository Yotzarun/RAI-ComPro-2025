#include<stdio.h>

int main() 
{
   
int size = 6;
int a[] = {3, 1, 2, 4, 5, 6};
int i;
int *ptr = a;
int sum = 0;

for(i=0; i <=size; i++)


{ 
    
    sum += *ptr;
    

}

printf("The sum of array is %d\n", sum);
}