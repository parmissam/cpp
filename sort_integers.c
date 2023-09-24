#include <stdio.h>
#include <math.h>
void sort(int*a){
    int j,i,x;
    for(j=0;j<5;j++){
        for(i=j+1;i<5;i++){
            if(*(a+j)>*(a+i)){
                x=*(a+j);
                *(a+j)=*(a+i);
                *(a+i)=x;
            }
        }
    }
}
int main(){
    int n=5;
    int a[n];
    int i,j;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sort(a);
    for(j=0;j<5;j++){
        printf("%d\n",a[j]);
    }
}
