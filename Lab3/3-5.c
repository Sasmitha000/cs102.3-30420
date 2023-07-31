#include <stdio.h>
#include <math.h>

int main() 
{
    int no1,no2;

    printf("Enter 2 Numbers:\n");
    scanf("%d%d",&no1,&no2);

    if(no1%no2==0) {
        printf("%d is a multiple of %d",no1,no2);
    }else {
        printf("%d is not a multiple of %d",no1,no2);
    }
}