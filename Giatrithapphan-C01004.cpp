#include<stdio.h>
#include<math.h>

int main() {
	int N;
	scanf("%d", &N);
	while(N--) {
    	long a;
        scanf("%ld", &a);
        printf("%.15lf\n", (double)1/a);
	}
    return 0;
}
