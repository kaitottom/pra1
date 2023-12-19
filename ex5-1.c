#include <stdio.h>
#include <string.h>

int main(void) {
  int wcounter = 0;
  char *greet1 = "What's up?", *greet2 = "Business as usual!";

  printf("Hi mate. %s %s\n", greet1, greet2);

  wcounter = strlen("Hi mate.");
  wcounter += strlen(greet1) + strlen(greet2);
  printf("the numer of alphabets is %d\n", wcounter);

  return 0;
}
