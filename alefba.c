#include <stdio.h>
#include <math.h>
int main(){
    char s[100];
    gets(s);
    int i=0;
    while(s[i]!=0){
        if((s[i]<='z' && s[i]>='a') || (s[i]<='Z' && s[i]>='A')){
            printf("%c",s[i]);
        }
    i++;
    }
}