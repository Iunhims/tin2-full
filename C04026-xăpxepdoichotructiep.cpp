#include <stdio.h>

void interchange_sort(int a[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
    
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
    
    printf("Buoc %d: ", i + 1);
    for (int k = 0; k < n; k++) {
      printf("%d ", a[k]);
    }
    printf("\n");
  }
}

int main() {
  int n, a[100];
  
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  interchange_sort(a, n);
  return 0;
}
