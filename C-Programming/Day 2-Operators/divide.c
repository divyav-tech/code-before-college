#include <stdio.h>
int main(){
  int  num1 , num2 , division;

  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number (Denominator shouldn't be zero): ");
  scanf("%d", &num2);

  division = num1/num2;

  printf(" The division of above two numbers is: %d\n", division);
  return 0;

}