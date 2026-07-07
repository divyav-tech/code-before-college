#include <stdio.h>
int main()
{
  int age;

  printf("Enter you age:  ");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("You are eligible to vote.");
  };
  return 0;
}