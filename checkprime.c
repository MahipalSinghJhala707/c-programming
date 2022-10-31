#include <stdio.h>

int main() {

  int x, y, z = 0;
  printf("Enter a positive number : ");
  scanf("%d", &x);

  if (x == 0 || x == 1)
    z = 1;

  for (y = 2; y < x ; ++y) {


    if (x % y == 0) {
      z = 1;
      break;
    }
  }


  if (z == 0)
    printf("%d is a prime number. :) ", x);
  else
    printf("%d is not a prime number. :(", x);

  return 0;
}
