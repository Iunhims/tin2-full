#include<stdio.h>
#include<string.h>
int main(){
	int t,k;
	char a[1000];
	scanf("%d",&t);
	scanf("\n");
	for(k=0;k<t;k++){
	gets(a);
	int d;
	if(a[0]==' ') d=0;
	else d=1;
	int l=strlen(a);
	 while(a[l-1]==' '){
            l--;
        }
	for(int i=0;i<l;i++){
		if(a[i]==' ' && a[i+1]!=' ') d++;
	}
	printf("%d",d);
printf("\n");
}
}

