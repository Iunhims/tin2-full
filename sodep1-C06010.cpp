#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		char a[501];
		gets(a);
		int i,l=strlen(a);
		int n=l/2;
		int kt=1;
		for(i=0;i<=n;i++){
			if(a[i]%2!=0 || a[l-1-i]%2!=0 || a[i]!=a[l-1-i]){
				printf("NO");
				kt=0;
				break;
			}
		}
		if(kt==1) printf("YES");	
		
		printf("\n");
	}
}

