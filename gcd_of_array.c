#include <stdio.h>
#include <math.h>
int bmm(int a, int b){
    int i,z,t;
    if(a>b)
        t=b;
    else
        t=a;
    for(i=t;i>0;i--){
        if(a%i==0 && b%i==0){
            z=i;
            break;
        }
    }
    return z;
}
int main(){
    int n,i,j,r,w,bm,q,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++){
        w=a[j];
        for(r=j+1;r<n;r++){
            q=a[r];
            bm=bmm(q,w);
            //printf("%d\n",bm);
            if(bm>max){
                max=bm;
            }

        }
    }
    printf("%d\n",max);
}
