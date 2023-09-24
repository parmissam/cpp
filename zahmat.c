#include <stdio.h>
#include <math.h>
int main(){
    int m,n,a,i,j,t,l,b,r=0,p,k=0;
    long long int z=1,num=0,sum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        int a1=a;
        for(j=0;j<a;j++){
        a1=a1/10;
        k++;
        if(a1<1)
        break;
        }
        for(t=0;t<k;t++){
            p=a%10;
            for(r=0;r<t;r++){
                z=m*z;
            }
        num=num+(z*p);
        a=a/10;
        z=1;
        }
        //int g=sqrt(num);
        for(b=1;b<=num;b++){
            if(num%b==0){
                sum=sum+b;
            }
        }
        int test=0;
        int h=sqrt(sum);
        for(l=2;l<=h;l++){
            if(sum%l==0){
                test=2;
                break;
            }
        }
        if(test==2){
            printf("Avval nist!\n");
        }
        if(test==0){
            printf("Avvale!\n");
        }
        k=0;
        num=0;
        sum=0;
    }
}