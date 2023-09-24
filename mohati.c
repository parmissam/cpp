#include <stdio.h>
#include <math.h>
int main(){
    float w,r,l;
    scanf("%f%f%f",&l,&w,&r);
    if(w<=l){
    if(pow((l/2),2)+pow((w/2),2)==pow(r,2))
    printf("true");
    else
    printf("false");
    }
    else{
        printf("false");
    }
    
}