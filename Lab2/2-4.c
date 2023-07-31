#include <stdio.h>

int main() 
{
    float C,F;

    printf("Enter Fahrenheit: ");
    scanf("%f",&F);

    C = 5.0*(F - 32.0)/9.0;

    printf("%f \n",C);
}