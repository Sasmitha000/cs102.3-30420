#include <stdio.h>

int main() {
    int intValue;
    float floatValue;
    double doubleValue;
    char charValue;

    printf("Enter Integer: ");
    scanf("%d",&intValue);
    printf("Enter Float: ");
    scanf("%f",&floatValue);
    printf("Enter Double: ");
   	scanf("%lf",&doubleValue);
    printf("Enter Char: ");
   	scanf(" %c",&charValue);

    printf("\nInteger Value: %d\n",intValue);
    printf("Float Value: %f\n",floatValue);
    printf("Double Value: %lf\n",doubleValue);
    printf("Char Value: %c\n",charValue);
    return 0;
}