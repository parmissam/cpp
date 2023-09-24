#include <stdio.h>
#include <math.h>
int main(){
    int i=0,n=0,j=0,z=0,m=0,s=0,ad=0,t=0,r=0,e=0,y=0;
    int x=0;
    int k=0;
    scanf("%d%d",&m,&n);
    scanf("%d",&s);
    for(j=2;j<n+1;j++){
        //printf("j%d\n",j);
        for(i=2;i<j;i++){
            k=0;
            //z=j%i;
            //printf("z%d\n",z);
            if(j%i==0){
               k=1;
               i=n;
               //printf("k%d\n",k);
            }
        }
        if(k==0){
        //printf("in%d\n",j);
        x=x+j;
        //printf("x%d\n",x);
        }

    }
        for(t=2;t<m+1;t++){
        //printf("j%d\n",j);
        for(r=2;r<t;r++){
            e=0;
            //z=j%r;
            //printf("z%d\n",z);
            if(t%r==0){
               e=1;
               r=m;
               //printf("k%d\n",k);
            }
        }
        if(e==0){
        //printf("in%d\n",j);
        y=y+t;
        //printf("x%d\n",x);
        }

    }
    ad=x-y-s;
    printf("%d",ad);

    //if(k==0)
    //printf("prime");
    //if(k==1)
    //printf("NotPrime");
}
