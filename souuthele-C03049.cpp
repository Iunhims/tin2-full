#include<stdio.h>
#include<math.h>
int kt(long long a){
	long long l=0,c=0;
	if(a%2==0) return 0;
	while(a>0){
		int d=a%10;
		if(d%2==1) l++;
		if(d%2==0) c++;
		a=a/10;
	}
	if(l>c) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(kt(n)==1) printf("YES\n");
		else printf("NO\n");
	}
}
