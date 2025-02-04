#include<stdio.h>
 #include<math.h>

int isPrimeNumber(int n) {
 
    if (n < 2) {
        return 0;
    }

    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
 int n;

    scanf("%d", &n);

    int dem = 0; 
    int i = 2;   
    while (dem < n) {
        if (isPrimeNumber(i)) {
            printf("\n%d ", i);
            dem++;
        }
        i++;
    }
}

