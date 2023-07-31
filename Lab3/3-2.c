#include <stdio.h>

int main() 
{
    int no1, no2, no3;
    int largest, smallest;

    printf("Enter three integer numbers:\n");
    scanf("%d%d%d",&no1,&no2,&no3);
    largest = no1;
    smallest = no1;

    if (largest < no2) {
        largest = no2;
    }
    if (largest < no3) {
        largest = no3;
    }

    if (smallest > no2) {
        smallest = no2;
    }
    if (smallest > no3) {
        smallest = no3;
    }

    printf("largest : %d\n",largest);
    printf("smallest : %d\n",smallest);
}