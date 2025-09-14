#include<stdio.h>

int main ()

{
  int i, j;
  int num[5];
  int *p;
  int ตัวตายตัวแทน;

  
  {
    printf("Enter 5 integers:");
    scanf("%d %d %d %d %d", &num[0], &num[1] , &num[2] , &num[3] , &num[4]);
  }

  for(i=0; i < 5-1 ; i++)
  {

  for(j=0; j < 5-1-i; j++)
  {
    int *a = num + j;

    int *b = num + j +1;

    if(*a > *b)
    {
   ตัวตายตัวแทน = *b;
   *b = *a;
   *a = ตัวตายตัวแทน;
    }

  }

  }
    
  printf("Sorted:");
  for (i=0; i < 5; i++)
  {
  printf("%d ", num[i]);
  }
}


