#include<stdio.h>

int main() 
{
	int test = 0;
    int *pt_test;
    pt_test = &test;

    printf("The address of test variable is at %p:", pt_test);
}