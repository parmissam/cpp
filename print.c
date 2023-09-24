#include <stdio.h>
#include <math.h>
int main(){
    int a=0,b=0,i=0,c=0,j=0,n=0,k=0,x=0;
    scanf("%d%d",&n,&x);
    for(j=n;j<x;j++){
        i=j;
        a=i%10;
        i=i-a;
        i=i/10;
        b=i%10;
        i=i-b;
        i=i/10;
        c=i%10;
    //printf("%d%d%d\n",a,b,c);
    if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
    k++;
    }
    printf("%d",k);
    
}


