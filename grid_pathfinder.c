#include <stdio.h>
#include <math.h>
int main(){
    int n=0,y=0,x=0,t=0,flag=1,i=1,j=1,flagx=1;
    scanf("%d   %d",&x,&y);
    scanf("%d",&n);
    for(t=2;t<n;t++){
        if(j==y)
            flag=2;
        if(j==0)
            flag=1;
        if(i==x)
            flagx=2;
        if(i==0)
            flagx=1;
            
        if(j<=y && flag==1)
            j++;
        
        if(j>=0 && flag==2)
            j--;
        
        if(i<=x && flagx==1)
            i++;
        
        if(i>=0 && flagx==2)
            i--;
        
    }
    printf("%d  %d",i,j);
}
