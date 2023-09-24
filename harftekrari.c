#include <stdio.h>
#include <math.h>
int main(){
    char s[100];
    gets(s);
    int i=0,j=0,count,max=0;
    while(s[i]!=0){
        j=0;
        while(s[j]!=0){
            if(s[i]==s[j] && s[i]!=' '){
                count++;
                //printf("count%d\n",count);
            }
        j++;
        }
    if(count>max)
        max=count;
    count=0;
    i++;
    }
    printf("%d",max);
}