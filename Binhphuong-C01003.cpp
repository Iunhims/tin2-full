#include<stdio.h>
#include<math.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        long a;
        scanf("%ld", &a);
        printf("%ld\n", a*a);
    }
    return 0;
}
