#include<stdio.h>
int kt(long long a){
	if(a%2==1) return 0;
	else {
		while(a>0){
			int d=a%10;
			if(d%2==1) return 0;
			a=a/10;
		}
		return 1;
	}
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

