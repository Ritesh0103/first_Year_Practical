#include <stdio.h> 
// #include<conio.h> 
struct employee
{
    char name[10];
    int basic_Pay;
    int Deduction;
    int allowances;
    int gross_salary;
};

int main()
{
    struct employee emp[5];
    int i;
    printf("Enter any five employee's name , basic_Pay , Deduction , allowances \n ");
    for (i = 0; i <= 4; i++)
    {
        printf("\n Enter the %d employee name , basic_Pay , Deduction , allowances ", i + 1);
        scanf("%s%d%d%d", emp[i].name, &emp[i].basic_Pay, &emp[i].Deduction , &emp[i].allowances);
        emp[i].gross_salary = emp[i].basic_Pay + emp[i].allowances - emp[i].Deduction;
    }
    printf("\n");
    for (i = 0; i <= 4; i++)
    {
        printf("\nThe %d employee Name is %s \n\nbasic pay is %d \n\nDeduction is %d \n\nallowance is %d\n\ngross salary is %d \n", i + 1, emp[i].name, emp[i].basic_Pay , emp[i].Deduction , emp[i].allowances , emp[i].gross_salary);
    }
    printf("\n");
    return 0;
}