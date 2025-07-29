#include<stdio.h>

int main() 
{

    int c, s, p;
    char name[20];
    float avg;

    printf("\nEnter your name:");
    scanf("%s", name);

    printf("Enter your Caculus score:");
    scanf("%d", &c);

    printf("\nEnter your Science score:");
    scanf("%d", &s);

    printf("\nEnter your Physics score:");
    scanf("%d", &p);

   avg = (c + s + p)/3;

   if (avg >= 80)
   {
    printf("\n %c, your average is %.2f You got grade A.");
   }

   else if (70 <= avg <80)
   {

    printf("\n %s, your average is %.2f You got grade B.", name, avg);}

    else if (60 <= avg <70){

    printf("\n %s, your average is %.2f You got grade C.");}

    else if (50 <= avg <60){

    printf("\n %s, your average is %.2f You got grade D.");}

    if (avg <= 50)
   {

    printf("\n %s, your average is %.2f You got grade F.");
   }
}