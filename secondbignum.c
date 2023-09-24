#include<time.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
  int i=0,n=0,a=0,num=0,max=0,b=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num>a){
            b=a; 
            a=num;
        }
        else if(num>b){
            b=num;
        }
  }
    printf("%d",b);  
}

