#include<stdio.h>
#include<math.h>
int main(){
	int arr[100],n,i,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){			
			if(arr[i]<arr[j]){
				c=arr[i];				
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

