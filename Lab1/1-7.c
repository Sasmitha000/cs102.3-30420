#include <stdio.h>

int main() 
{
    int no1,no2,tmp;

    printf("Enter First Number: ");
    scanf("%d",&no1);
    printf("Enter Second Number: ");
    scanf("%d",&no2);

    printf("\n----- Before Swap -----\n");
    printf("First Number: %d\n",no1);
    printf("Second Number: %d\n\n",no2);

    tmp=no1;
    no1=no2;
    no2=tmp;

    printf("----- After Swap -----\n");
    printf("First Number: %d\n",no1);
    printf("Second Number: %d\n",no2);
}