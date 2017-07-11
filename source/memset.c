#include <stdio.h>
#include <string.h>

int main(){
  char s[] = "abcde";

  memset(s, 'A', 4);

  printf("%s\n", s);

  return 0;
}
