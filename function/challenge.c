#include<stdio.h>

void aver(int count, int arr[])
{
    int sum = 0;
    for(int i=0;i<count;i++)
    sum = sum + arr[i];

    float avg = (float)sum / count;
    printf("Average: %.2f\n", avg);
}

void higie(int count, int arr[], char name[][100])
{
    int i;
    int max = arr[0];
    int hino=0;
    for(i=1; i < count; i++)
    if (arr[i] > max)
    {
        
        max = arr[i];
        hino = i;

    }

    printf("Highest score is %d by %s\n", max, name[hino]);

}

void lowie(int count, int arr[], char name[][100])
{
    int i;
    int min = arr[0];
    int hino=0;
    for(i=1; i < count; i++)
    if (arr[i] < min)
    {
        
        min = arr[i];
        hino = i;

    }
    
    printf("Lowest score is %d by %s\n", min, name[hino]);

}


void pass(int count, int arr[], char name[][100])
{
    int i;
    printf("The students who pass are:\n");
    for(i=0; i < count ; i++)
    {
      if(arr[i] > 60)
      printf("%s with score %d\n", name[i], arr[i]);
    }
}

int main()

{

    int count;
    

    printf("\nEnter the number of stundent:");
    scanf("%d", &count);

    int arr[count], i;
    char name[count][100];

    

    for(i=0; i < count; i++)
    {
    printf("\nEnter student number %d name:", i+1);
    scanf("%s", name[i]);

    printf("\nEnter your grade of number %d student:", i+1);
    scanf("%d", &arr[i]);
    }

    aver(count, arr);
    higie(count, arr, name);
    lowie(count, arr, name);
    pass(count, arr, name);



    return 0;
}