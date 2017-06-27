#include <stdio.h>
#include <string.h>

int main(){
  char *s = "flag";
  char input[5];

  printf("input(Max is 4 bytes): ");
  scanf("%5s", input);

  if(strlen(input) > 4) return 0;

  printf("length: %d\n", (int)strlen(input));

  return 0;
}
