#include<stdio.h>

int main() 
{

    int a, b;
    int menu;

    printf("Enter a number:");
    scanf("%d", &a);

    printf("\nEnter b number:");
    scanf("%d", &b);

    printf("\nCalculator Menu: 1.+, 2.-, 3.*, 4./\n");
    scanf("%d", &menu);
    printf("\nChoose number:%d", menu);

    if(menu == 1)
    {
     float add = a+b;
     printf("\nAns: Num+Num2 = %.0f", add);
    }
    

    else if(menu == 2)
    {
     float subs = a-b;
     printf("\nAns: Num-Num2 = %.0f", subs);
    }
    
     
    else if(menu == 3)
    {
     float times = a*b;
     printf("\nAns: Num*Num2 = %.0f", times);
    }
    
    

    else if(menu == 4)
    {
     float divi = a/b;
     printf("\nAns: Num/Num2 = %.0f", divi);
    }
    
    

        
         
    }


