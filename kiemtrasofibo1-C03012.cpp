#include <stdio.h>
int fibonaci(int n) {
    if (n == 0)
        return 1;
   int f0=0,f1=1,tg;
   while(f1<n){
    tg=f0;
   	f0=f1;
   	f1=f1+tg;
   }
   if(f1==n) return 1;
   return 0;
}
int main() {
	int n;
	scanf("%d", &n);
	if(fibonaci(n)){
		printf("1");
	}else{
		printf("0");
	}
 }


