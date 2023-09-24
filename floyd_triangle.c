#include <stdio.h>
#include <math.h>
int main(){
    int i=0,n=0,a=0,l=1,d=1;
    scanf("%d",&n);
    while(n>=l){

        printf("%d\t",d);
        d++;
        a++;
        if(a==l){
        printf("\n");
        l++;
        a=0;
        }
    }
}
