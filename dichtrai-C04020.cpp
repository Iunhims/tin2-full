#include<stdio.h>
#include<math.h>
int main(){
	int arr[100],n,i,left;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&left);
	for(i=left;i<n;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<=left-1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

