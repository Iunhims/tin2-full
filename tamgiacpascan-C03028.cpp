#include<stdio.h>
int giaithua(int n)
{
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}
int pascal(int m,int n){
    int a= (giaithua(m))/((giaithua(n))*(giaithua(m-n)));
    return a;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("1 ");
        for(int j=1;j<=i-1;j++){
            printf("%d ",pascal(i-1,j));
        }
        printf("\n");
    }
}
