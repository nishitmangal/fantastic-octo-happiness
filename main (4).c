#include <stdio.h>
int main() {
  char op;
  float num1, num2;
  printf("Select the operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  switch (op) {
    case '+':
      printf("%f + %f = %f", num1, num2, num1 + num2);
      break;
    case '-':
      printf("% - %f = %f", num1, num2, num1- num2);
      break;
    case '*':
      printf("%f * %f = %f", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%f / %f = %f", num1, num2, num1 / num2);
      break;

    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
