#include <stdio.h>
#include <stdlib.h>

int main()
{
   int employeeid;
   float hoursworked,hourlyrate;
   printf("enter employee id:\n");
   scanf("%d",&employeeid);
   printf("enter hours worked:\n");
   scanf("%f",&hoursworked);
   printf("enter hourly rate:\n");
   scanf("%f",&hourlyrate);
   printf("Employee id:%d\n",employeeid);
   printf("salary of the month:%.2f\n",hoursworked*hourlyrate);
   return 0;
}
