#include <stdio.h>
#include <math.h>
typedef struct
{
    int day;
    int month;
    int year;
    int n;
}Date;
int main(){
    Date a;
    scanf("%d",&a.n);
    printf("Enter the dates:\n");
    while(a.n>0){
        scanf("%d",&a.day);
        scanf("%d",&a.month);
        scanf("%d",&a.year);
        if(a.day<10){
            if(a.month<10){
                if(a.year<10)
                    printf("000%d.0%d.0%d\n",a.year,a.month,a.day);
                else if(a.year<100)
                    printf("00%d.0%d.0%d\n",a.year,a.month,a.day);
                else if(a.year<1000)
                    printf("0%d.0%d.0%d\n",a.year,a.month,a.day);
                else
                    printf("%d.0%d.0%d\n",a.year,a.month,a.day);
            }
            else{
                if(a.year<10)
                    printf("000%d.%d.0%d\n",a.year,a.month,a.day);
                else if(a.year<100)
                    printf("00%d.%d.0%d\n",a.year,a.month,a.day);
                else if(a.year<1000)
                    printf("0%d.%d.0%d\n",a.year,a.month,a.day);
                else
                    printf("%d.%d.0%d\n",a.year,a.month,a.day);
            }
        }
        else
            if(a.month>=10){
                if(a.year<10)
                    printf("000%d.%d.%d\n",a.year,a.month,a.day);
                else if(a.year<100)
                    printf("00%d.%d.%d\n",a.year,a.month,a.day);
                else if(a.year<1000)
                    printf("0%d.%d.%d\n",a.year,a.month,a.day);
                else
                    printf("%d.%d.%d\n",a.year,a.month,a.day);
            }
            else{
                if(a.year<10)
                    printf("000%d.0%d.%d\n",a.year,a.month,a.day);
                else if(a.year<100)
                    printf("00%d.0%d.%d\n",a.year,a.month,a.day);
                else if(a.year<1000)
                    printf("0%d.0%d.%d\n",a.year,a.month,a.day);
                else
                    printf("%d.0%d.%d\n",a.year,a.month,a.day);
            }
        a.n--;
    }

}