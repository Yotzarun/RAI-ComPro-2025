#include <stdio.h>

int main()  {

    int num, count, range1=0,range2=0,range3=0,range4=0;
    float high[300],sumhigh=0,avg=0;
    printf("Plz enter number of the students:");
    scanf("%d",&num);
    for (count=0; count<num; count++)

    {

        printf("Student %2d : ",count+1);
        scanf("%f",&high[count]);
    }

    for (count=0; count<num;count++);

    {
        if (high[count]<=160)
        range1++;
        
        else if (high[count]<=170)
        range2++;
        
        else if (high[count]<=180)
        range3++;
        
        else
        range4++;

        sumhigh = sumhigh + high[count];
    }
    avg = sumhigh/num;

    printf("\n 0 - 160 : %3d", range1);
    printf("\n161 - 170 : %3d", range2);

    printf("\n171 - 180 : %3d", range3);

    printf("\n181 - 200 : %3d", range4);

    printf("\n\nAverage ; %f",avg);


    }

