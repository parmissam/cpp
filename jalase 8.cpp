#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void get (int *a, int *b){
	cout<<"adad:";	
	cin>>*a;cout<<"adad:";cin>>*b;
}
void mohasebe (int a, int b, int *sum,int *zarb){

	*sum=a+b;
	*zarb=a*b;
	
}

int main(int argc, char** argv) {
	int  a,b ,sum, zarb;
	get (&a,&b);
	mohasebe (a,b,&sum,&zarb);
	cout<<sum<<endl<<zarb;
	return 0;
}