#include <stdio.h>
#include <string.h>

void sort_names(char *names[], int n) {
  int i, j;
  char *temp;

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(names[i], names[j]) > 0) {
        temp = names[i];
        names[i] = names[j];
        names[j] = temp;
      }
    }
  }
}

int main() {
  char *names[] = {"Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"};
  int n = sizeof(names) / sizeof(names[0]);

  sort_names(names, n);

  for (int i = 0; i < n; i++) {
    printf("%s\n", names[i]);
  }

  return 0;
}