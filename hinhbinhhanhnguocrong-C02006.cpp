#include<stdio.h>
#include<math.h>
int main(){
	int n,m,i,j;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<i;j++){
			printf("~");
		}
		for(j=1;j<=n;j++){
			if(i==1||i==m||j==1||j==n){
				printf("*");
			}else printf(".");
		}
		printf("\n");
	}
	return 0;
}

