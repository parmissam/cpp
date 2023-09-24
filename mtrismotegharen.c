#include <stdio.h>
#include <math.h>
int main(){
    int n=0,i=0,j=0,t=0,r=0,flag=0;
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=2;
                break;
            }
        }
    }
    if(flag==2){
        printf("NO");
    }
    else{
        printf("YES");
    }
}