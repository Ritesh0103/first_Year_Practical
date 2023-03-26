#include <stdio.h> 

int gross_Salary(int basic_pay , int deductions, int allowances){
    int gross_salary = basic_pay + allowances - deductions;
    return gross_salary;
}

int main(){
    int basic_pay;
    int deductions;
    int allowances;
    printf("%d", gross_Salary(1000, 100 , 100));
    return 0;
}