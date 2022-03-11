#include<stdio.h>
struct employee
{
   int emp_age,salary;
   long emp_no;
   char emp_name[10];
   };
   int main()
{
   struct employee e[10];
   int i;
   for(i=0;i<2;i++)
   {
     printf("enter the name");
     scanf("%s",e[i].emp_name);
     printf("enter the age");
     scanf("%d",&e[i].emp_age);
     printf("enter the phone number");
     scanf("%d",&e[i].emp_no);
     printf("enter the salary");
     scanf("%d",&e[i].salary);
     }
     for(i=0;i<2;i++)
   {

     printf("\n%s",e[i].emp_name);
     printf("\t%d",e[i].emp_age);
     printf("\t%d",e[i].emp_no);
     printf("\t%d",e[i].salary);
     }

}
