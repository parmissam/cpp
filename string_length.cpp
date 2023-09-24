#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int tedad (char ch[]){
	int c=0,i;
	for (i=0; i!='\0';i++){
		c++;
	}
	cout<<c;
	return c;
}
int main(int argc, char** argv) {
	int b,c;
	char ch[20];
	gets(ch);
	b=strlen(ch);
	cout<<b;
	return 0;
}
