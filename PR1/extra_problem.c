#include <stdio.h>

int main() {
    int salary;
    float hra, da;

    printf("Enter basic salary: ");
    scanf("%d", &salary);

    if (salary <= 10000) {
        hra = salary * 0.20;
        da  = salary * 0.80;
    }
    else if (salary <= 20000) {
        hra = salary * 0.25;
        da  = salary * 0.90;
    }
    else {   
        hra = salary * 0.30;
        da  = salary * 0.95;
    }

    float grossSalary = salary + hra + da;
    printf("Gross Salary is : %.2f", grossSalary);

    return 0;
}
