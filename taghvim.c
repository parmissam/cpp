#include <stdio.h>
#include <math.h>
int main(){
    int n,d,m,a;
    scanf("%d",&n);
    scanf("%d%d",&d,&m);
    if (m<7)
    a=31*(m-1)+d+n-1;
    if(m>6)
    a=31*6+30*(m-7)+d+n-1;
    if(a%7==1)
    printf("Saturday");
    if(a%7==2)
    printf("Sunday");
    if(a%7==3)
    printf("Monday");
    if(a%7==4)
    printf("Tuesday");
    if(a%7==5)
    printf("Wednesday");
    if(a%7==6)
    printf("Thursday");
    if(a%7==0)
    printf("Friday");
}