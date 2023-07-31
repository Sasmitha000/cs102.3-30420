#include <stdio.h>

int inSeconds(int, int, int);

int main() {
    int hours, minutes, seconds, result = 0, i;

    for(i = 0; i < 2; ++i) {
        printf("Time %d:\n", i + 1);
        printf("Enter Hours: ");
        scanf("%d", &hours);
        printf("Enter Minutes: ");
        scanf("%d", &minutes);
        printf("Enter Seconds: ");
        scanf("%d", &seconds);

        if(i) {
            result -= inSeconds(hours, minutes, seconds);
        }else {
            result += inSeconds(hours, minutes, seconds);
        }

        if(result < 0) {
            result *= -1;
        }
    }

    printf("-------------------------\n");
    printf("%d seconds\n", result);
    printf("-------------------------\n");
}

int inSeconds(int h, int m, int s) {
    s += (h * 3600) + (m * 60);
    return s;
}