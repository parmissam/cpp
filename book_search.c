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
int main(){
    Book a[100];
    int n,i,j;
    char s[30];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i].shabak);
        getchar();
        gets(a[i].name);
        gets(a[i].writer);
        scanf("%s",&a[i].genre);
        scanf("%f",&a[i].price);
    }
    scanf("%s",s);
    for(j=0;j<n;j++){
        if(strcmp(s,a[j].genre)==0)
            printf("%s\n",a[j].name);
    }

}
