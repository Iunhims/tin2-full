#include<stdio.h>
int main(){
	int a,b,m,n;
	int s=0, x=0;
	scanf("%d%d",&a,&b);
	int az =a, bz =b;
	for(;a>0 && b>0;){
	m=a%10;
	s=s+m;
	a=a/10;
	n=b%10;
	x=x+n;
	b=b/10;
    }
   if (s<x)
   {printf("%d %d", az, bz);}
   else {printf("%d %d", bz, az);}
	return 0;
}

