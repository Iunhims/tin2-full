#include<stdio.h>

int min(int a[],int n)
{
	int i,c;
	c=a[0];
	for(i=1;i<n;i++)
		if(a[i]<c)
			c=a[i];
	return c;	
}

int main()
{
	int n,i,a[250],c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	c=min(a,n);	
	for(i=0;i<n;i++)
	{
		if(a[i]==c)
		{	
			a[i]=a[i+1];
			n--;
			i--;
		}
	}
	d=min(a,n);	
		printf("%d %d",c,d);
	return 0;
}
