#include <stdio.h>
int main(){

	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
    int n,i;
    scanf("%d", &n);
    int a[n];
    int d=0;
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++){
    	if(a[i]>= max){
    		d++;
    		max=a[i];
		}
	}
    printf("%d",d);
    printf("\n");
}
    return 0;
}

