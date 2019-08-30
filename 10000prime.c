#include <stdio.h>

int is_prime(int x) {
  int i;
  int prime = 1;
  for(i=2; i<x; i++) {
    if ((x%i) == 0)
      prime = 0;
  }
  return prime;
}

int main() {
  int count = 0;
  int number = 2;
  while (count<10000) {
    if (is_prime(number)) {
      printf("%d\n",number);
      count++;
    }
    number++;
  }
  return 0;
}
