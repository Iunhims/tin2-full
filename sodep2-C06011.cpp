#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		char m[501];
		gets(m);
		int i,l=strlen(m);
		int n=(l-1)/2;
		int kt=1;
		int s=0;
		int a[strlen(m)];
		for(i=0;i<l;i++){
			a[i]=m[i]-48;
			s=s+a[i];
			
		}
		for(i=0;i<=n;i++){
			
			
			if(a[0]!=8 || a[l-1]!=8 || a[i]!=a[l-1-i]||s%10!=0){
				printf("NO");
				kt=0;
				break;
			}
		}
		
		if(kt==1  ) printf("YES");	
		
		printf("\n");
	}
}

