#include <stdio.h>
#include <math.h>
int main(){
    int i,j,r,t,n,q,w,e,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-2;j++){
        w=a[j];
        for(t=j+1;t<n-1;t++){
            q=a[t];
            for(r=t+1;r<n;r++){
                e=a[r];
                if(w*w+q*q==e*e || w*w+e*e==q*q || q*q+e*e==w*w)
                    flag++;
            }
        }
    }
    printf("%d",flag);
}