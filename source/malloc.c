#include <stdio.h>
#include <stdlib.h>

int main(){
  char *buf;

  buf = (char*)malloc(10);

  free(buf);
  return 0;
}
