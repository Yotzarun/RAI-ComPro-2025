#include<stdio.h>

int cv (char str[])
{
    int cnt = 0, i = 0;
    while  (str[i] != '\0')
    {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'  || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'  || str[i] == 'U' )
    {
        cnt++;
    }

      i++;
    }
    
  return cnt;
  
}

int main ()

{

char st[20];
printf("Input:");
scanf("%s", st);

printf("Output Number of vowels: %d", cv(st));

}