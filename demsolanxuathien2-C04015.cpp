#include <stdio.h>
void chinh(int x){
	int n;
	scanf("%d", &n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		b[i]=1;
	}
	printf("Test %d:\n", x);
	for(int i=0;i<n;i++){
		int dem=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
				b[j]=0;
			}
		}
		printf("%d xuat hien %d lan\n", a[i], dem);
		}	
	}
}
int main() {
	int test,x=1;
	scanf("%d", &test);
	while(test>0){
		chinh(x);
		x++;
		test--;
	}
 }

