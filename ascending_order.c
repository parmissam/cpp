#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d\t%d\t%d",&a,&b,&c);
    if(a<=b)
    {
        if(b<=c)
        printf("%d\t%d\t%d",c,b,a);
        else{
            if(a>=c)
            printf("%d\t%d\t%d",b,a,c);
            else
            printf("%d\t%d\t%d",b,c,a);
        }
    }
    else
    {
        if(b>=c)
        printf("%d\t%d\t%d",a,b,c);
        else{
            if(a<=c)
            printf("%d\t%d\t%d",c,a,b);
            else
            printf("%d\t%d\t%d",a,c,b);
        }
    }
    
}
