#include<stdio.h>

void Xoa(int a[],int *n,int j)
{
	int i;
	for(i=j+1;i<*n;i++)
	{
		a[i-1]=a[i];
	}
	(*n)--;
}

int main()
{
	int n,i,j,d=1;
	int a[250];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				{
					d++;
					Xoa(a,&n,j);
					j--;
				}
		}	
		printf("%d %d\n",a[i],d);
		d=1;
	}	
	return 0;
}
