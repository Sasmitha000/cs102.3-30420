#include <stdio.h>
#include <math.h>

int main() 
{
    int radius;
    printf("Enter Radius: ");
    scanf("%d",&radius);
    printf("Diameter = %f\n",radius*2.0);
    printf("Circumference = %f\n", 2*M_PI*radius);
    printf("Area of the Circle = %f\n",M_PI*radius*radius);
}