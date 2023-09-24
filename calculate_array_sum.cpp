#include <iostream>
#include <math.h>
# include <array>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int get (){
	int x,a[4];
	cin>>x;
	a[4]=x;
	return a[4];
}
int mohasebe (int a[]){
	int i,s=0;
	for (i=0 ; i<4; i++){
		s+=a[i];
	}
	return s;
}

int main(int argc, char** argv) {
	int b, a[4];
	a[4]=get();
	for (b=0 ; b<4 ;b++){
		cout<< a[b];
	}
	return 0;
}
