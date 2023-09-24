#include <stdio.h>
#include <math.h>
int main(){
    int n=0,h=0,m=0,a=0,hour=0,mins=0,hours=0,b=0,min=0;
    scanf("%d   %d",&h,&m);
    scanf("%d   %d",&a,&b);
    mins=b+a*60+m+h*60;
    hour=mins/60;
    min=mins-(hour*60);
    //printf("%d  %d",);
    if(hour>=24)
    hour=hour%24;
    if(hour>12){
        hour=hour-12;
        printf("%d  %dPM",hour,min);
    }
    if(hour<=12){
        printf("%d  %dAM",hour,min);
    }
        
}


