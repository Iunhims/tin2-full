#include<stdio.h>
int c[1000000];
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d %d",&a,&b);
        c[a]++;
        c[b]++;
    }int kt=0;
    for(int i=1;i<=n;i++){
        if(c[i]>=n-1){
            kt=1;break;
        }
    }
    if(kt==0)printf("No");
    else printf("Yes");
    
    
}
