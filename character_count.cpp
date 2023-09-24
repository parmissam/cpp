#include <iostream>
# include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int mohasebe (char name[],char ch, int n){
	int i,c=0;
	for (i=0; i<n; i++){
		if (name[i]==ch){
			c++;
		}
	}
	return c;
}




int main(int argc, char** argv) {
	int i,n,c;
	char ch, name[20];
	cout<<"tedad horof";
	cin>>n;
	for (i=0;i<n;i++){
		cin>>name[i];
		
	}
	cout<<"character:";
	cin>>ch;
	c=mohasebe(name,ch,n);
	cout<<c;
	
	return 0;
}
