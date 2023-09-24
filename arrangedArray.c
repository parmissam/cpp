#include <stdio.h>
#include <math.h>
int main(){
    int i,j,n,t,z=0,r;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(r=0;r<n;r++){
        t=a[r];
        for(j=r+1;j<n;j++){
            if(t>a[j])
            z++;
        }
    }
    printf("%d",z);
}