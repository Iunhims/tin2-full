#include<stdio.h>
int main(){
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
		long n,i;
		scanf("%ld",&n);
		long d=0,e=0;
		while(n>0){
			i=n%10;
			n=n/10;
			if(i%2==0) d++;
			else e++;
		}
		printf("%ld %ld\n",e,d);
	}
}

