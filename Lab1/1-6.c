#include <stdio.h>

int main() 
{
    char name[10];
    int birthYear, age;
    int currentYear = 2023;

    printf("Enter Name: ");
    scanf("%s",name);
    printf("Enter Birth Year: ");
    scanf("%d",&birthYear);

    age = 2023-birthYear;

    printf("%s is %d years old. \n",name,age);
}