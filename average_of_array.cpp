#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int ian (int a[4]){
	float m,s;
	int i;
	for (i=0; i<4;i++){
		s+=a[i];
	}
	m=s/4.0;
	return m;
}
int main(int argc, char** argv) {
	int a[4],b,c,i;
	cout<<"a=";
	for (i=0;i<4;i++){
		cin>>a[i];
	}
	b=ian (a);
	cout<<b;
	return 0;
}
