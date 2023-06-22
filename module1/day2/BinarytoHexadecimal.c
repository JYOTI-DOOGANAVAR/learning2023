#include <stdio.h>

void printExponent(double x) {
  // Get the address of the exponent field of x.
  unsigned int *exponent = (unsigned int *)&x;

  // Convert the exponent field to hexadecimal.
  printf("Exponent in hexadecimal: 0x%02X\n", *exponent);

  // Convert the exponent field to binary.
  printf("Exponent in binary: ");
  for (int i = 31; i >= 0; i--) {
    printf("%d", (*exponent >> i) & 1);
  }
  printf("\n");
}

int main() {
  // Declare a double variable.
  double x;

  // Prompt the user to enter a double value.
  printf("Enter a double value: ");
  scanf("%lf", &x);

  // Print the exponent part of x.
  printExponent(x);

  return 0;
}