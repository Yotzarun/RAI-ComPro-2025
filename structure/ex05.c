#include<stdio.h>

int main() {

 struct {
    int minute;
    int second;
    }times[3];
    int totalSeconds = 0;

    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &times[i].minute, &times[i].second);

        totalSeconds += times[i].minute * 60 + times[i].second;
    }

    printf("Total time elasped: %d second(s)\n", totalSeconds);

    return 0;
}








