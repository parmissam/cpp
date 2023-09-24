#include <stdio.h>
#include <math.h>
int main(){
    char s[100];
    char t,r,u;
    int i=0,j=0,count=0,counter=0;
    gets(s);
    scanf("%c",&t);
    scanf("%c",&u);
    scanf("%c",&r);
    while(s[i]!=0){
        if(s[i]==t){
            counter++;
        }
        i++;
    }
    while(s[j]!=0){
        if(s[j]==t){
            count++;
        }
        if(s[j]==t && count==counter)
            printf("%c",r);
        else
            printf("%c",s[j]);
        j++;
    }
}