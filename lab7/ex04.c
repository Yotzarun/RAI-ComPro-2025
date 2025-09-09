#include<stdio.h>

int main() 
{
    int a;
    int size = 6;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int *p;
    p = &array[size];
    int i;


for(i=0; i<size;i++)

{

  a = *p;
  printf("\n%d",array[i]);

}
}