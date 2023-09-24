#include <stdio.h>
#include <math.h>
int main(){
    char s[100];
    gets(s);
    int i=0,j=0;
    while(s[i]!=0){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
            printf("%c",s[i]);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
            printf("%c",s[i]);
        }
        else{
            printf("%c",s[i]);
        }
    i++;
    }
}