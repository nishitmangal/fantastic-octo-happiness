#include <stdio.h>
int main() {
  char calculations;
  double firstnumber, secondnumber;
  printf("Enter what you want to do (+, -, *, /): ");
  scanf("%c", &calculations);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &firstnumber, &secondnumber);

  switch (calculations) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", firstnumber, secondnumber, firstnumber + secondnumber);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", firstnumber, secondnumber, firstnumber * secondnumber);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", firstnumber, secondnumber, firstnumber / secondnumber);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", firstnumber, secondnumber, firstnumber - secondnumber);
      break;
    default:
      printf("Error! calculation sign is not correct thanks in advance");
  }

  return 0;
}
