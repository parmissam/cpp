#include <stdio.h>
#include <math.h>
int main(){
    int n,h,i,hm,mm,m,hours=0,mins=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d   %d",&h,&m);
        hours=hours+h;
        mins=mins+m;
    }
    hm=hours/n;
    mm=mins/n;
    if(hm>12){
        hm=hm-12;
        printf("%d:%dPM",hm,mm);
    }
    else
    printf("%d:%dAM",hm,mm);
}


