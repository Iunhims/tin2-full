#include<stdio.h>
int main(){
    int t;
    scanf("%d\n",&t);
 
    while(t--){
        int n,i;
        scanf("%d\n",&n);
        int a[n],m=0;
        for(i=0;i<n;i++){
        	scanf("%d",&a[i]);
        	if(a[i]>m) m=a[i];
        	}
        	printf("%d\n",m);
        	for(i=0;i<n;i++){
        	if(a[i]==m) printf("%d ",i);
        	}
        printf("\n");
    }
}

