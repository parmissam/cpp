#include <stdio.h>
#include <math.h>
#include<string.h>
typedef struct{
    long long int shabak;
    char name[100];
    char writer[100];
    char genre[30];
    double price;
} Book;
typedef struct{
    int number;
    char kharidar[100];
    char address[1000];
    int num;
    double priceh;
    Book w;
} Factor;
int main(){
    int x=1;
    int n,i,j,m;
    scanf("%d",&n);
    Factor a[100];
    for(i=0;i<n;i++){
        scanf("%d",&m);
        getchar();
        gets(a[i].kharidar);
        getchar();
        gets(a[i].address);
        for(j=0;j<m;j++){
            scanf("%lld",&a[i].w.shabak);
            getchar();
            gets(a[i].w.name);
            gets(a[i].w.writer);
            scanf("%s",&a[i].w.genre);
            scanf("%f",&a[i].w.price);
        }
        scanf("%f",&a[i].priceh);
        a[i].number=x;
        x++;
    }
    int t,r,z=0,p,c,b=0;
    for(c=0;c<n;c++){
    for(r=0;r<n;r++){
        for(t=0;t<n;t++){
            if(a[r].priceh>=a[t].priceh){
                z++;
            }
        }
        if(z==n){
            printf("%d\n",a[r].number);
            a[r].priceh=0;
            b++;
        }
        if(b==n)
            break;
        z=0;
    }
    }
}
