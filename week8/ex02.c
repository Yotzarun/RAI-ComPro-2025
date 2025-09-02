#include<stdio.h>
int main()
{

int i;
struct profile{
char name[100];
int age;
float score;
} s[3];

for(i=0;i<3;i++)
{
    printf("Student[%d]",i);

    printf("'s name:");
    scanf("%s", s[i].name);

    printf("\nStudent[%d]'s age:",i);
    scanf("%d",&s[i].age);

    printf("\nStudent[%d]'s score:",i);
    scanf("%f",&s[i].score);

    printf("\n");

}

    if (s[1].score > s[3].score && s[1].score > s[2].score)
    printf("The highest scores belong to %s at %.1f scores !",s[1].name, s[1].score);

    if (s[2].score > s[3].score && s[2].score > s[1].score)
    printf("The highest scores belong to %s at %.1f scores !",s[2].name, s[2].score);

    if("The highest scores belong to %s at %.1f scores !",s[3].name, s[3].score);
    

    return 0;
}


