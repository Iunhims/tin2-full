#include<stdio.h>
#include<math.h>
int isPrimeNumber(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    int squareRoot = (int) sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
 int i, n;
    scanf("%d", &n);
    if (n >= 2) {
        printf("%d\n", 2);
    }
    for (i = 3; i < n; i+=2) {
        if (isPrimeNumber(i) == 1) {
            printf("%d\n", i);
        }
    }
}

