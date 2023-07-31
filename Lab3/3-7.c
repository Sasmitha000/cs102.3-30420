#include <stdio.h>
#include <math.h>

int main() 
{
    int years,basicSalary,monthlySales;
    double grossMonthly;
    char from;

    printf("Enter Working Years: ");
    scanf("%d",&years);
    printf("Enter Basic Salary: ");
    scanf("%d",&basicSalary);
    printf("Enter Monthly Sales: ");
    scanf("%d",&monthlySales);
    printf("Enter character \"C\" if the city is Colombo: ");
    scanf(" %c",&from);

    if(years>5) {
        grossMonthly = basicSalary + basicSalary*0.1;
    }else {
        grossMonthly = basicSalary;
    }
    if(from == 'C') {
        grossMonthly += 2500;
    }
    if(monthlySales>=50000) {
        grossMonthly += monthlySales*0.15;
    }else if(monthlySales>=25000) {
        grossMonthly += monthlySales*0.12;
    }else {
        grossMonthly += monthlySales*0.1;
    }

    printf("Rs.%.2f",grossMonthly);
}