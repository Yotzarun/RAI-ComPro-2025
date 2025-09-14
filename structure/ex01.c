#include<stdio.h>
int main()
{

int i;
struct profile{
char name[100];
int age;
float score;
} s[3];

for(i=1;i<=3;i++)
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

printf("Student 1 name is %s, age %d\n", s[0].name, s[1].age);
printf("Student 2 name is %s, age %d\n", s[1].name, s[1].age);
printf("Student 3 name is %s, age %d\n", s[2].name, s[2].age);
return 0;
}