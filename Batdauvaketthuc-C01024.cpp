#include<stdio.h>

int main(){
    int t;
    scanf ("%d",&t);
    while (t--){
    	long long a;
    	scanf ("%lld", &a);
    	int cuoi=a%10;
    	while (a>9) a/=10;
    	if (a==cuoi) printf ("YES\n");
    	else printf ("NO\n");
	}

}