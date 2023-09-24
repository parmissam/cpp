#include <stdio.h>
#include <math.h>
int tedad(int x){
    if(x==1)
        return 1;
    else if(x==2)
        return 2;
    else
        return tedad(x-1)+tedad(x-2);
}
int main(){
    int n,z;
    scanf("%d",&n);
    z=tedad(n);
    printf("%d",z);

}
