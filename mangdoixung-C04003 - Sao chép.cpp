#include <stdio.h>
int thuanNghich(int a[],int n){
	int l=0,r=n-1;
	while(l<=r){
		if(a[l]!=a[r]){
			return 0;
		}
		l++;
		r--;
	}
	return 1;
	}
int main() {
	int N;
	scanf("%d", &N);
	while (N--){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	if (thuanNghich(a,n)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}}
 }

