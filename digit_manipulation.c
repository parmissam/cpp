#include <stdio.h>
#include <math.h>
int tak(int num){
    int z1=0,z2=0;
    while(num>9){
        z1=num%10;
        z2=(num-z1)/10;
        num=z1+z2;
    }
    printf("%d",num);
    return num;
}
int main(){
    int a=0,w1=0,w2=0,w=0,i=1,j=1,b=0,m=0,n=0;
    long long int s=0;
    scanf("%lld%d%d",&s,&m,&n);
    int s1=s;
    if(m==1){
        a=s%10;
    }
    else {
        while(i!=m){
            s=s/10;
            a=s%10;
            i++;
        }
    }
    if(n==1){
        b=s1%10;
    }
    //printf("%d",a);
    else {
        while(j!=n){
            s1=s1/10;
            b=s1%10;
            j++;
        }
    }
    //printf("%d\n",a);
    //printf("%d\n",b);
    int sum=a*b;
    //printf("sum%d\n",sum);
    if(sum<10){
        printf("%d",sum);
    }else{
        tak(sum);
    }
}
