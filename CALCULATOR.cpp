#include <stdio.h>

int main() {

  char op;
  int first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%d %d", &first, &second);

  switch (op) {
    case '+':
      printf("%d + %d = %d", first, second, first + second);
      break;
    case '-':
      printf("%d - %d = %d", first, second, first - second);
      break;
    case '*':
      printf("%d * %d = %d", first, second, first * second);
      break;
    case '/':
      printf("%d / %d= %d", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
