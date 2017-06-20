#include <stdio.h>

int main(){
  int i, num=0;
  for(i = 0; i < 10; i++){
    num += i;
  }
  printf("%d\n", num);
  return 0;
}
