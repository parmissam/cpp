#include <stdio.h>
#include <math.h>
int main(){
    int i,m=0,j=0,q=0,l1=0,flag2=0,flag1=0,w=0,b1,b2,n,a,flag=0;
    scanf("%d",&n);
    a=n;
    for(i=0;i<n;i++){
        a=a/10;
        m++;
        if(a<1)
            break;
    }
    for(j=0;j<m;j++){
        b1=n%10;
        n=n/10;
        if(flag==1){
            if(b2>b1){
                q++;
                if(flag1==2){
                    l1=1;
                    break;
                }
                if(flag2==1){
                    flag2=2;
                }
                flag1=1;
                
            //printf("%d%d\n",flag1,flag2);
            //printf("%d\n",l1);
            }
            else if(b2<b1){
                w++;
                if(flag1==1){
                    flag1=2;
                }
                if(flag2==2){
                    l1=1;
                    break;
                }
                flag2=1;
            }
        }
        //printf("%d%d\n",flag1,flag2);
        //printf("%d\n",l1);
        b2=b1;
        flag=1;
    }
    
    if(l1==1){
        printf("Bad Tartibe!");
    }
    else{
        printf("Khosh Tartibe!");
        
    }
}