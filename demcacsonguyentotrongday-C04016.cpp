#include<stdio.h>
#include<math.h>
int b[10001];
int nt(int a){
	int i,kt=0;
	if(a<=1) return 0;
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0){
			kt=1;
			break;
		}
	}
	if(kt==1) return 0;
	else return 1;
}
int main(){
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
	
	int n,i,d=0,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(nt(a[i])==1) b[a[i]]++;
	}
	printf("Test %d:\n",k+1);
	int kt;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int z=a[j];
				a[j]=a[i];
				a[i]=z;
			}
		}
	}
	for(i=0;i<n;i++){
	
		if(nt(a[i])==1){
		 kt=0;
			for(j=0;j<i;j++){
		    if(a[j]==a[i]){
		    	kt=1;
		    	break;
		
		}
	}

		if(kt==0) printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
	}
	
}
     for(i=0;i<n;i++){
		b[a[i]]=0;
	}
	printf("\n");
}
}
