#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int a[256],n,i,j,k=0,m=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) 
    scanf("%d",&a[i]);
    for (i=0;i<n;i++){
    if(a[i]%2==0){
    	m++;
	}
	else k++;
	}
	
    for (i=0;i<n;i++)
    if (a[i]%2==0) printf("%d ",a[i]);
    printf("\n");
	for (i=0;i<n;i++)
    if (a[i]%2!=0) printf("%d ",a[i]);
    return 0;
}

