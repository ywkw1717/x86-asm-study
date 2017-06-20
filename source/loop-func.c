#include <stdio.h>

int loop(){
  int i, num=0;
  for(i = 0; i < 10; i++){
    num += i;
  }

  return num;
}

int main(){
  printf("%d\n", loop());
  return 0;
}
