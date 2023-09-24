#include <stdio.h>
#include <math.h>
int main(){
    int a=0,z=0,b=0,p=0,i=0,n=0;
    scanf("%d   %d",&a,&b);
    scanf("%d",&n);
    int x=a;
    int y=b;
    for(i=1;i<n;i++){
        z=x;
        x=(x*a)-(y*b);
        y=(y*a)+(z*b);
        printf("%d  %d\n",x,y);

    }
    printf("%d  %d",x,y);
}