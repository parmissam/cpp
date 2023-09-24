#include <stdio.h>
int main(){
    int h,m;
    scanf("%d",&h);
    if(h>15)
    m=15*15;
    if(h<16)
    m=h*15;
    if(h>30)
    m=m+18*15;
    if(h>15&&h<31)
    m=m+18*(h-15);
    if(h>45)
    m=m+20*15;
    if(h>30&&h<46)
    m=m+20*(h-30);
    if(h>60)
    m=m+22*15;
    if(h>45&&h<61)
    m=m+(h-45)*22;
    if (h>61)
    m=m+(h-60)*23;
    printf("%d",m);
}
