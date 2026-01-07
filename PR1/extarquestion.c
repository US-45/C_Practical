#include <stdio.h>

int main() {
    int salary;
    printf("Enter basic salary: ");
    scanf("%d", &salary);
    float  hra , da;

    if (salary >= 10000){
        hra = salary *0.20;
        da = salary *0.80;

    }else if(salary < 20000){
        hra = salary * 0.25;
        da = salary * 0.90;

    }else if (salary > 20000){
        hra = salary * 0.30;
        da = salary * 0.95;
    }

    float grossSalary = salary +  hra + da;
    printf("Gross Salry is : %.2f", grossSalary);

    return 0;
}