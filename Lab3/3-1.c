#include <stdio.h>
int main() 
{
    int no1,no2;

    printf("Enter First Number: ");
    scanf("%d",&no1);
    printf("Enter Second Number: ");
    scanf("%d",&no2);

    if(no1<no2) {
        printf("Highest: %d",no2);
    }else if(no2<no1){
        printf("Highest: %d",no1);
    }else{
        printf("Equal");
    }
}