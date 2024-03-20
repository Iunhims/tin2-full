#include<stdio.h>
#include<stdlib.h>
#define re(a) scanf("%d",&a)
#define wr(a) printf("%d\n",a)
int cmp(const void *a, const void *b)
{
	int* aa= (int*) a;
	int* bb= (int*) b;
	if(*aa > *bb) return 1;
	if(*aa < *bb) return -1;
	return 0;
}
main()
{
	int x[4], y[4];
	for(int i = 0; i < 4; i ++)
	{
		re(x[i]);re(y[i]);
	}
//	x[2]=x[0];	x[3] = x[1];
//	y[2]=y[1];	y[3] = y[0];
	qsort(x,4,sizeof(int),cmp);
	qsort(y,4,sizeof(int),cmp);
	int dx = x[3] - x[0];
	int dy = y[3] - y[0];
	if(dx > dy) wr(dx*dx);
	else wr(dy*dy);
}