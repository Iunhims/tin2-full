#include<stdio.h>
int b[10001];
int main(){
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
	long n,i;
	scanf("%ld",&n);
	printf("Test %d: ",k+1);
	for(i=2;i<=n;i++){
		long d=0;
		while(n%i==0){
			d++;
			n=n/i;
		}
	  if(d>0) printf("%ld(%ld) ",i,d);
	}
	
	printf("\n");
}
}

