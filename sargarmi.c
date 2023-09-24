#include <stdio.h>
#include <math.h>
void star(int u,int p,int z ,int w){
    int r,t=0;
    for(r=0;r<u;r++){
        for(t=0;t<p;t++){
            if((t+1)==z && (r+1)==w){
                printf(".");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}
void line(int o){
    int q;
    for(q=0;q<o;q++){
        printf("-");
    }
}
int main(){
    int n,m,s,x,y,i=0,j,a;
    scanf("%d%d%d%d%d",&m,&n,&x,&y,&s);
    for(i=0;i<s;i++){
        scanf("%d",&a);
        if(a==8){
            if(y==1){
                y=m;
            }else{
                y=y-1;
            }
            star(m,n,x,y);
        }
        if(a==2){
            if(y==m){
                y=1;
            }else{
            y=y+1;
            }
            star(m,n,x,y);
        }
        if(a==4){
            if(x==1){
                x=n;
            }else{
            x=x-1;
            }
            star(m,n,x,y);
        }
        if(a==6){
            if(x==n){
                x=1;
            }else{
                x=x+1;
            }
            star(m,n,x,y);
        }
        if(a!=2 && a!=4 && a!=6 && a!=8){
            star(m,n,x,y);
        }
        line(n);
        printf("\n");
    }
    
}