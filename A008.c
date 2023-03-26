/**
 * C program to calculate gross salary of an employee
 */

#include <stdio.h>



int main()
{
    int employee = 1;
    for(int i = 0 ; i < 5 ; i++){
      float basic, gross, da, hra;

      /* Input basic salary of employee */
      printf("Enter basic salary of %dst employee: ", employee);
      scanf("%f", &basic);


      /* Calculate D.A and H.R.A according to specified conditions */
      if(basic <= 10000)
      {
          da  = basic * 0.8;
          hra = basic * 0.2;
      }
      else if(basic <= 20000)
      {
          da  = basic * 0.9;
          hra = basic * 0.25;
      }
      else
      {
          da  = basic * 0.95;
          hra = basic * 0.3;
      }

      /* Calculate gross salary */
      gross = basic + hra + da;

      printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
      printf("\n");
      employee++;
    }

    return 0;
}