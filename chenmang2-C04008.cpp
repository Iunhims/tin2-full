#include <stdio.h>
int main(){
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){

	int m,n,i,j,x;
	scanf("%d %d %d",&m,&n,&x);
	int a[m],b[n];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		}
		printf("Test %d:\n",k+1);
	for(i=0;i<x;i++){
		printf("%d ",a[i]);
		}
	for(i=x;i<x+n;i++){
		printf("%d ",b[i-x]);
		}
	for(i=x+n;i<m+n;i++){
		printf("%d ",a[i-n]);
		}
		
			printf("\n");
			}
			return 0;
			}
