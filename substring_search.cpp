#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char b[10],ch[20],a[20];
	int i,n,d=0;
	gets(ch);
	gets(a);
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]==a[0]){
			for(ch[i];ch[i+n];i++){
				ch[i]=b[d];
				d++;
			}
			if(strcmp(b,a)==0){
				return 1;
			}
		}
	}
	return 0;
}
