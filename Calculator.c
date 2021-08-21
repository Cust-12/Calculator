#include <stdio.h>
int main() {

char operator;
double first, second;

printf("\nEnter an operator: (+, -, *, /)");   
scanf("%c", &operator);    // reads operator
printf("\nEnter two operands:\n");  
scanf("%lf %lf", &first, &second);  // reads operands

switch (operator) {
// case for addition
case '+':
printf("%.1f + %.1f = %.1f", first, second , first + second);
break;
  
// case for substraction
case '-':
printf("%.1f - %.1f = %.1f", first, second, first - second);
break;
  
// case for multiplication
case '*':
printf("%.1f * %.1f = %.1f", first, second, first * second);
break;
  
// case for division
case '/':
printf("%.1f / %.1f = %.1f", first, second, first / second);
break;
  
// operator is not supported
default:
printf("Error! An incorrect operator was entered");
}
return 0;
}