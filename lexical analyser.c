#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
  char input[MAX_LENGTH];
  int i = 0, j = 0;

  printf("Enter your input: ");
  fgets(input, MAX_LENGTH, stdin);

  while (input[i] != '\0') {
    if (!isspace(input[i])) {
      input[j++] = input[i];
    } else if (j > 0 && !isspace(input[j - 1])) {
      input[j++] = ' ';
    }
    i++;
  }

  input[j] = '\0';

  printf("Output: %s\n", input);

  return 0;
}
