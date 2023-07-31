#include <stdio.h>

int power(int base, int exponent){
    int i, result = 1;
    for(i = 1; i <= exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d = %d", base, exponent, power(base, exponent));
}