#include<stdio.h>
int main(){
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
	
	int n,i,d=0,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	if(a[i]==a[i+1]) d++;
	
		}
	 printf("%d",d);
	
	
	printf("\n");
}
}

