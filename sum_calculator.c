#include <stdio.h>
int main(){
    int n,p,i,m;
    int x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        m+=m;
    }
    printf("%d",x);
}
