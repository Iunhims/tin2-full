#include<stdio.h>
#include<math.h>
int snt(long a){
	if(a<2) return 0;
	else{
	
	int kt=0;
	for(long i=2;i<=sqrt(a);i++){
		if(a%i==0){
		
		kt=1;
		break;	
	}
}
	if(kt==1 ) return 0;
	else return 1;

}
}
int main(){
    int t;
    scanf("%d\n",&t);
 
    while(t--){
        int n,i;
        scanf("%d\n",&n);
        int a[n];
        for(i=0;i<n;i++){
        	scanf("%d",&a[i]);
        	}
        	for(i=0;i<n;i++){
        		if(snt(a[i])==1){
        	printf("%d ",a[i]);
        	}
        	}
        printf("\n");
    }
}
