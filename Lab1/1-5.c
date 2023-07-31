#include <stdio.h>

int main() 
{
    double no1;
    double no2;

    printf("Enter First Value: ");
    scanf("%lf",&no1);
    printf("Enter Second Value: ");
    scanf("%lf",&no2);

    double average = (no1+no2) / 2;

    printf("%lf \n",average);
}