#include <stdio.h>
int InterchangeSort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void xuat(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
int main() {
	int n,t=0,y=0;
	scanf("%d", &n);
	int a[n];
	int temp[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	InterchangeSort(a, n);
	
	int k=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			temp[k]=a[i];
			k++;
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]%2){
			temp[k]=a[i];
			k++;
		}
	}
	xuat(temp,k);
 }

