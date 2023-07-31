#include <stdio.h>

float f2c(float f) {
    float c = (5.0 / 9.0) * (f - 32.0);
    return c;

}

float c2f(float c) {
    float f = (9.0 / 5.0) * c + 32.0;
    return f;
}



int main() {
    int i;
    printf("+---------+------------++------------+---------+\n");
    printf("| Celsius | Fahrenheit || Fahrenheit | Celsius |\n");
    printf("+---------+------------++------------+---------+\n");
    for(i = 32; i <= 212; ++i) {
        if(i-32 <= 100) {
            printf("| %-8d", i - 32);
            printf("| %-10.2f |", c2f(i - 32));
        }else {
            printf("|         |            |");
        }

        printf("| %-10d ", i);
        printf("| %-8.2f|", f2c(i));

    printf("\n");
    }
    printf("+---------+------------++------------+---------+\n");
}