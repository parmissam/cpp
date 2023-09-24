#include <stdio.h>
int main(){
    int i=0,n=0,j=0,m=0,s=0,ad=0;
    int x=0;
    int k=0;
    scanf("%d%d",&m,&n);
    scanf("%d",&s);
    for(j=m;j<n+1;j++){
        for(i=2;i<=sqrt(j);i++){
            k=0;
            if(j%i==0){
               k=1;
               i=j;
            }
        }
        if(k==0){
        x=x+j;
        }
    }
    if(m==1){
    ad=x-s-1;
    printf("%d",ad);
    }
    if(m>1){
    ad=x-s;
    printf("%d",ad);
    }
}
