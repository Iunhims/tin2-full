#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	int b[100];
	int c[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
		c[i]=1;
	}
	int dem2=0;
	for(int i=0;i<n;i++){
		if(b[i]){
		b[i]=0;
		int dem=1;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
			dem++;
			b[j]=0;	 
			}
		}
		    if(dem>1){
		        dem2++;
            }
	    }
    }
    printf("%d\n",dem2);
  		for(int i=0;i<n;i++){
		    if(c[i]){
		        c[i]=0;
		        int dem1=1;
		        for(int j=i+1;j<n;j++){
			    if(a[i]==a[j]){
			        dem1++;
			        c[j]=0;	 
			    }
		        }
		    if(dem1>1) printf("%d ",a[i]);
	        }
        }
}
