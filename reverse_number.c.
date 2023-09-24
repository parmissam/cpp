#include <stdio.h>
#include <math.h>
int main(){
    int n=0,i=0,a=0,l=0,j=0,b=0,m=0,x=0;
    scanf("%d",&l);
    a=l;
    int v=0;
    int z=1;
    for(i=0;i<l;i++){
        a=a/10;
        m++;
        if(a<1)
        break;
    }
    for(j=0;j<m;j++){
        b=l%10;
        z=1;
        for(x=j;x<m-1;x++){
            z=10*z;
        }
        v=v+(b*z);
        l=l-b;
        l=l/10;
    }
    printf("%d",v);
}
