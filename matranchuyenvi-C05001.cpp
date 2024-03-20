#include <stdio.h>

void nhap(int a[50][50], int *m, int *n) {
	*m = *n = 0;
	while(*m <= 0 || *n <= 0) {
		scanf("%d%d", m, n);
	}
	int i, j;
	for(i = 0; i < *m; i++) {
		for(j = 0; j < *n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void hienThi(int a[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}


void chuyenVi(int a[50][50], int m, int n, int b[50][50]) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			b[i][j] = a[j][i];
		}
	}
}

int main() {
	int a[50][50], b[50][50];
	int m, n;
	nhap(a, &m, &n);
	chuyenVi(a, m, n, b);
	

	

	hienThi(b, n, m);
	
	return 0;
}
