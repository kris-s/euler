#include <stdio.h>

int main(int argc, char* argv[]){

  int i, sum = 0, fib_hold = 0;
  int fib0, fib1 = 1;

  while(fib1 < 4000000){
    fib_hold = fib1;
    fib1 = fib0 + fib1;
    fib0 = fib_hold;

    if(fib1 % 2 == 0) {
      sum += fib1;
    }
  }
  printf("%d\n", i);
  printf("%d\n", sum);
  return 0;
}
