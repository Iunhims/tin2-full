#include<stdio.h>
int kt(long a){
	   long s=0,m=a,b=0;
	   while(a>0){
	   	int d=a%10;
	   	if(d==4) return 0;
	   	s=s+d;
	   	b=b*10+d;
	   	a=a/10;
	   }
	if(s%10==0 && b==m) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	long a,b=1;
	while(n--){
		b*=10;
	}
	a=b/10;
	
	for(long i=a;i<b;i++){
		if(kt(i)==1) printf("%ld ",i);
	}
	printf("\n");
}
}
 
