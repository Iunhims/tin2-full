#include<stdio.h>
 int main(){
  int a,b;
   int i;
   
    int sum;
	 scanf("%d%d",&a,&b);
	  sum=0;
	   if(a>b) { i=b; for(i;i<=a;i++)
	   { sum=sum+i;
	    }printf("%d",sum);
	    } else { i=a;
		 for(i;i<=b;i++){ sum=sum+i;
		  }printf("%d",sum); } }
