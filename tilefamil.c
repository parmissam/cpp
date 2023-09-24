#include <stdio.h>
#include <math.h>
int main(){
    int a,b,n,i;
    scanf("%d%d%d",&a,&b,&n);
    //float h=(n/2);
    
        for(i=1;i<n;i++){
            int j=n-i;
            if(a%i==0){
                if(j%b==0){
                    printf("%d\t%d\n",i,j);
                }
            }
        }
    

}