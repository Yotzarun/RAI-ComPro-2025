#include<stdio.h>

int squareA (int, int);
int main()

{

    int s, enj;
    printf("Enter 2 integers:");
    scanf("%d %d", &s, &enj);
    printf(" sum of the area of %d and %d square is = %d\n", s, enj, squareA(s, enj));

}

#include<stdio.h>

int squareA (int a1, int a2)
{

    int answer=0;
    answer = (a1*a1) + (a2*a2);
    return answer;


}


 