#include <stdio.h>

float smallest(float num1, float num2, float num3) {
    float min =  num1;
    if(min > num2) {
        min = num2;
    }
    if(min > num3) {
        min = num3;
    }
    return min;
}

int main() {
    float num1, num2, num3;
    printf("Enter Number 1: ");
    scanf("%f", &num1);
    printf("Enter Number 2: ");
    scanf("%f", &num2);
    printf("Enter Number 3: ");
    scanf("%f", &num3);
    printf("Smallest = %.2f\n", smallest(num1, num2, num3));
}

