#include <stdio.h>
#include <math.h>
int main(){
    int n,i,flag=0,a=0;
    long long int money=1000,num=0,mon=0;
    int test=2;
    int yPrice=0,tPrice=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&tPrice);
        if(flag==1){
            if(yPrice>tPrice && test==0){
                money=(yPrice*num)+mon;
                mon=0;
                num=0;
                test=2;
                //printf("money??%d\n",money);
                //printf("num??%d\n",num);
            }
            if(tPrice>yPrice && test==2){
                test=0;
                num=money/yPrice;
                mon=money-(num*yPrice);
                money=0;
                //printf("money!!%d\n",money);
                //printf("num!!%d\n",num);
            }
        }
        
        if(tPrice>1000){
            a++;
        }
        if(i==(n-1) && test==0){
            money=tPrice*num+mon;
        }
        flag=1;
        yPrice=tPrice;
    }
    if(a==n){
        money=0;
        printf("%lld\n",money);
    }else{
        printf("%lld\n",money-1000);
    }
    

}
