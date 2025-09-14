#include<stdio.h>

int main()

{

int num[3][3];
int i, j;
int *p;

for(i=0;i < 3;i++)
{

for(j=0;j < 3;j++)

{
    printf("enter number:");

    scanf("%d", &num[i][j]);
}

}


for(int *p = &num[0][0]; p <= &num[2][2]; p++) 
{
    printf("%d ", *p);
}

}
