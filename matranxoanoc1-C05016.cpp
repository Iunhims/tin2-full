#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m=n,p=n*n;
	int x=1,k=0,i,j;
	int a[n][n];
	while(x<=p){
		for(j=k;j<m;j++){
			a[k][j]=x++;
		}
		for(i=k+1;i<m;i++){
			a[i][m-1]=x++;
		}
		for(j=m-2;j>=k;j--){
			a[m-1][j]=x++;
		}
		for(i=m-2;i>k;i--){
			a[i][k]=x++;
		}
		m--;
		k++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

