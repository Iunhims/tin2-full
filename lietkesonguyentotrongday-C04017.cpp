#include<stdio.h>
#include<math.h>

void Nhapmang(int a[100], int n) {
	int i;
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
}

int ktraNto(int a[100], int b[100], int n) {
	int k, c=0, e=0;
	for(int i=0; i<n; i++) {
		int x=2, d=0;
		int t=a[i];
		if(t==1) continue;
		for(x ; x<=sqrt(t); x++){ 
			if (t%x==0){
				d=1;
				break;
			}
		}
		if (d==0){
			c=c+1;
			b[e]=a[i];
			e=e+1;
		}
	}
	printf("%d ", c);
	for(k=0; k<e; k++){
		printf("%d ", b[k]);
	}
}

int main() {
	int n, a[100], b[100];
	scanf("%d", &n);
	Nhapmang(a, n);
	ktraNto(a, b, n);
}

