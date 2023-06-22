#include <stdio.h>

int is_vowel(char character) {
  switch (character) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return 1;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      return 1;
    default:
      return 0;
  }
}

int main() {
  char character;

  printf("Enter a character: ");
  scanf("%c", &character);

  if (is_vowel(character)) {
    printf("Vowel\n");
  } else {
    printf("Not Vowel\n");
  }

  return 0;
}