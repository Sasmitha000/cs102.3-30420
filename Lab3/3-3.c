#include <stdio.h>

int main() 
{
    char employeeName[20];
    int basicSalary,newSalary,increment;

    printf("Enter Employee Name: ");
    scanf("%s",employeeName);
    printf("Enter Basic Salary: ");
    scanf("%d",&basicSalary);

    if (basicSalary>=10000){
        increment= 0.15*basicSalary;
    }
    else if (basicSalary>=5000){
        increment= 0.10*basicSalary;
    }
    else {
            increment = 0.05*basicSalary;
    }

    newSalary = basicSalary + increment;

    printf("Employee Name: %s\n",employeeName);
    printf("New Salary: %d",newSalary);
}









