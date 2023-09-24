#include <stdio.h>
#include <math.h>
int main(){
    int i,n,a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a==1){
            printf("Saturday\n");
        }
        if(a==2){
            printf("Sunday\n");
        }
        if(a==3){
            printf("Monday\n");
        }
        if(a==4){
            printf("Tuesday\n");
        }
        if(a==5){
            printf("Wednesday\n");
        }
        if(a==6){
            printf("Thursday\n");
        }
        if(a==7){
            printf("Friday\n");
        }
    }
}