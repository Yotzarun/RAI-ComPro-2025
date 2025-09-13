#include<stdio.h>

int main() 
{

int i=0;

int array[6] = { 3, 1, 2, 4, 5, 6 };

int *max = &array[0];


for(i=0;i<6;i++)
{
    if (array[i] > *max)
    max = &array[i];

    
}

printf("Maxvalue: %d", *max);

}