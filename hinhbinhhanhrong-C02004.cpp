#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n-i;j>=1;j--){
			printf("~");
		}
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n){
				printf("*");
			}else printf(".");
		}
		printf("\n");
	}
	return 0;
}

