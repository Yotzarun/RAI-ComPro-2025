#include <stdio.h>

int main() {
    int st, ed;
    printf("Enter start and end number: ");
    scanf("%d %d", &st, &ed);

    printf("\nThe prime numbers within the interval are:");

    for (int i = st; i <= ed; i++) {
        if (i <= 1) continue; 

        int pm = 1; 
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                pm = 0; 
                break;
            }
        }

        if (pm) {
            printf("%d ", i);
        }
    }

    printf(" ");
    return 0;
}