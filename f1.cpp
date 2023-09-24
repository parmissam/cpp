#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i=0 , c,n;
	char x[5];
	gets (x);
	for (i=0 ; x[i]!='\0'; i++)
		c++;
	for (n=0 ; n<c; n++){
		cout<<x[0]; 
	}
	return 0;
}