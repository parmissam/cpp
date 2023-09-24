#include <stdio.h>
#include <math.h>
int main(){
    int n, href,mref;
    scanf("%d %d %d",&n,&href,&mref);
    int minserf=href*60+merf;
    int i,h,m;
    int mins,mindsth,mindstm,mindist=24*60;
    for(i=0;i<n;i++){
        scanf("%d %d",&h,&m);
        mins=h*60+m;
        dist=mins-minserf;
        if(dist<0)
            dist=-dist;
            if(dist<mindist){
                mindist=dist;
                mindsth=h;
                mindstm=m;
            }
    }
    printf("%d:%d",mindsth,mindstm);
    
}