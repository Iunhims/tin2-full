#include <stdio.h>
float stb(int a[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=a[i];
	}
	float tb=(float)tong/(n);
	printf("%.3f", tb);
}
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	stb(a,n);
 }


