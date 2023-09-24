#include <stdio.h>
#include <math.h>
long long int fact(int x){
    int i;
    unsigned long long int a=1;
    for(i=1;i<=x;i++){
        a=a*i;
    }
    return a;
}
int main(){
    char r,q;
    int a,b;
    scanf("%d",&a);
    scanf("%c",&q);
    scanf("%c",&r);
    if(r=='!'){
        int y=fact(a);
        printf("%d",y);
    }else{
    scanf("%d",&b);
    switch(r){
        case '+':
        printf("%d",a+b);
        break;
        case '-': 
        printf("%d",a-b); 
        break;
        case '*': 
        printf("%d",a*b); 
        break;
        case '/': 
        printf("%d",a/b); 
        break;
        
    }
    }
}
