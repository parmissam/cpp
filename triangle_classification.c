#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    printf("impossible");
    else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
    printf("right");
    }
    else if(a*a+b*b<c*c||a*a+c*c<b*b||c*c+b*b<a*a)
    printf("obtuse");
    
    else{
    printf("acute");
    }
}
