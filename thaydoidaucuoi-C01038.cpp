#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);


  int first = n, last = n % 10;
  int pow = 1;
  while (first >= 10) {
    first /= 10;
    pow *= 10;
  }


  n = n - first * pow - last + last * pow + first;


  printf("%d\n", n);

  return 0;
	
}


