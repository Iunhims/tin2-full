#include<stdio.h>
int main()
{
	int n,i,j,k; 
 	scanf("%d", &n);
	for(i=1 ; i<3 ; i++)
 	{
 		for(j=1 ; j<=i ; j++)
 			printf("*");
 		printf("\n"); 
 	}
	for(i=3; i<n ; i++){
		printf("*");
		for(j=1; j<=i-2 ; j++){
			printf(".");
		}
		printf("*\n");
	}
	for(k=1;k<=n;k++){
		printf("*");
	}	
 	
 return 0 ;
}

