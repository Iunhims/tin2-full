#include<stdio.h>
int sothuannghich(int a){
	int s=0,d;
	int x=a;
	while(a>0){
	
		if(a%10==9) {
		return 0;
		break;
	}
		else s=s*10+a%10;
	   a=a/10;
	} 
	if(s==x) return 1;
	else return 0;
}
int main(){
	int n,d=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(sothuannghich(i)==1) {
		printf("%d ",i);
		d++;
	}
	}
	printf("\n%d",d);
}

