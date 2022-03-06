#include<stdio.h>
int main()
{
  int marks ;

  printf("Enter the marks of the student");
  scanf("%d",&marks);
  printf("Marks obtained by student is %d",marks);


  if(marks>=85 && marks<=100)
  {
  printf("\nGrade A");
  }
  else if(marks>=70 && marks<=84)
  {
  printf("\nGrade B");
  }
  else if(marks>=55 && marks<=69)
  {
  printf("\nGrade C");
  }
  else if(marks>=40&& marks<=54)
  {
  printf("\nGrade D");
  }
  else
  {
  printf("\nGrade F");
  }
  }
