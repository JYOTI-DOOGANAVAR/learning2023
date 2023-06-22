#include <stdio.h>

void sum_alternate_elements(int *array, int size) {
  int sum = 0;
  for (int i = 0; i < size; i += 2) {
    sum += array[i];
  }
  printf("The sum of alternate elements is %d\n", sum);
}

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  sum_alternate_elements(array, size);
  return 0;
}