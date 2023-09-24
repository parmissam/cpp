#include <stdio.h>
#include <math.h>
int main(){
    int i=0,a=1,b=1,c=1,d=0,n,flag=0;
    int num1=0,num2=0,num3=0;
    while(flag<4){
        scanf("%d",&d);
        if(flag==0){
             num1=d;
             flag++;
        }
        else{
            if(num1==d){
                a++;
            }
            else if(flag==1){
                num2=d;
                flag++;
            }
            else if(num2==d){
                b++;
            }
            else if(flag==2){
                num3=d;
                flag++;
            }
            else if(num3==d){
                c++;
            }
            else if(flag==3){
                flag++;
            }

        }
    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d",c);
}