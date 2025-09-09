#include<stdio.h>
int main()
{
struct profile{
char name[20];
int age;
} s[10];
int i;
struct profile *sPtr;
sPtr = s;

Example : Program get data of 10 students.

Reference..www.ce.kmitl.ac.th King Mongkut’s Institute of Technology Ladkrabang
43

for (i=0; i<10; i++)
{
printf("Student # %d\n\tName :", i+1 );
scanf("%s",sPtr->name);
printf("\tAge:");
scanf("%d",&(sPtr->age));
sPtr++;
}
sPtr -= 10;
for (i=0; i<10; i++)
{
if ((sPtr->age) > 20)
printf("\n%s, %d",sPtr->name,sPtr->age);
sPtr++;
}
return 0;
}