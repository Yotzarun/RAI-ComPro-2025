#include <stdio.h>

void sum(int arr[], int n, int *seven, int *sodd) {
    *seven = 0;
    *sodd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            *seven += arr[i];
        } else {
            *sodd += arr[i];
        }
    }
}

int main() {
    int n = 5;

    int arr[n];
    
        printf("Input:");
        scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    int sume, sumodd;
    sum(arr, n, &sume, &sumodd);

    printf("Sum of even numbers: %d\n", sume);
    printf("Sum of odd numbers: %d\n", sumodd);

    return 0;
}
