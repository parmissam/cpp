#include <stdio.h>
#include <math.h>
int main(){
    char a[100];
    gets(a);
    int i=0,n=0,j,r=0;
    char t;
    char*l,*f;
    f=a;
    l=a;
    while(a[i]!=0){
        if(n!=0){
        f++;
        }
        n++;
        i++;
   }
   for(j=0;j<(n/2);j++){
       t=*l;
       *l=*f;
       *f=t;
       f--;
       l++;
   }
   printf("%s",a);
}
