#include<stdio.h>
int main()
{
//food item and its price
int n;

printf("Enter the number");
scanf("%d",&n);
switch(n)
{
case 1:
   printf("Food item: Pasta\n");
   printf("Price:200");
   break;
case 2:
   printf("Food item:Donuts\n");
   printf("Price:159");
   break;
case 3:
   printf("Food item:Brownie\n");
   printf("Price:85");
   break;
case 4:
   printf("Food item:Pizza\n");
   printf("Price:239");
   break;
case 5:
   printf("Food item:Birayani\n");
   printf("Price:490");
   break;
default :
   printf("Use the default case");


}

}
