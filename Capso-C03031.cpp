#include<stdio.h>
long ucln(long a, long b){
	long d;
	   while(a%b!=0){
	   	d=a%b;
	   	a=b;
	   	b=d;
	   }
	   return b;
}
int main(){
	int t;
    scanf("%d",&t);
    while(t--){
    	long a,b,c,d;
    	scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
    	if(ucln(a,b)==ucln(c,d)) printf("YES");
    	else printf("NO");
    	
		printf("\n");
}
}

