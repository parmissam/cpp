#include <stdio.h>
#include <math.h>
int main(){
    int i,j,n,r,t,flag=0,sp=2;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(t=0;t<n;t++){
        for(r=0;r<n;r++){
            if(r>=t){
                printf("%d ",a[t][r]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}