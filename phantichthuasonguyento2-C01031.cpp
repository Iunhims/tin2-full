#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool songuyento(int);
int main(){
	int n,i=2;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%i==0){
			printf("%d",i);
			break;
		}
	}
	n=n/i;
	while(n>1){
		if(n%i==0){
			printf("x%d",i);
			n/=i;
		}
		else
		i++;
	}
	return 0;
}

