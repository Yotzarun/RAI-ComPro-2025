#include<stdio.h>

int main()

{

    int i, std =1;

    struct info
    {
        char name1[50]; 
        char name2[50]; 
        char name3[50]; 
        int ID[2];
        float Math[2];
        float English[2];
        float Science[2];
        float History[2];

    } info; 

for(std = 1;std <= 3;std++) {
printf("\nEnter name, ID, and 4 grades for student %d: ", std);
scanf("%s %d %f %f %f %f",info.name1, &info.ID[std], &info.Math[std], &info.English[std], &info.Science[std], &info.History[std]);

}

 float avg1, avg2, avg3;
 avg1 = (info.Math[0] + info.English[0] + info.Science[0] + info.History[0])/ 4;
 avg2 = (info.Math[1] + info.English[1] + info.Science[1] + info.History[1])/ 4;
 avg3 = (info.Math[2] + info.English[2] + info.Science[2] + info.History[2])/ 4;


 printf("Student Average:");

    printf("\n%s, (ID: %d) : %.2f",info.name1, info.ID[0], avg1);

    printf("\n%s, (ID: %d) : %.2f",info.name2, info.ID[1], avg2);
    
    printf("\n%s, (ID: %d) : %.2f",info.name3, info.ID[2], avg3);

}