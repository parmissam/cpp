#include <stdio.h>
#include <math.h>
int main(){
    int a=0,l=0,count=0,z=0,w=0,q=0,u=0;
    scanf("%d",&l);
    a=l;
    w=l;
    z=l;
    q=l;
    int v=12;
    while(v>=10){
        int i=0,j=0,b=0,m=0;
        if(count>0){
        a=v;
        l=v;
        }
        for(i=0;i<l;i++){
            a=a/10;
            m++;
            if(a<1)
            break;
        }
        v=0;
        for(j=0;j<m;j++){
            b=l%10;
            v=v+b;
            l=l-b;
            l=l/10;
            }
        count++;
    }
    if(q<10)
    printf("%d",u);
    else
    printf("%d\n",count);
    count=0;
    v=10;
    while(v>=10){
        int i=0,j=0,b=0,m=0;
        if(count>0){
        z=v;
        w=v;
        }
        for(i=0;i<w;i++){
            z=z/10;
            m++;
            if(z<1)
            break;
        }
        v=1;
        for(j=0;j<m;j++){
            b=w%10;
            v=v*b;
            w=w-b;
            w=w/10;
            }
        count++;
    }
    if(q<10)
    printf("%d",u);
    else
    printf("%d",count);

    
}