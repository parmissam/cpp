#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void selection_sort(int *a , int n)
{
	int i,j,T;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;i++)
	if(a[i]>a[j])
	{
	T=a[i];
	a[i]=a[j];
	a[j]=T;
	}
}
int check (int *p,int n){
	int i,sum;
	for (i=0 ;i<(n-2);i++){
		sum+=p[i];
	}
	if (sum==p[n-1]){
		return 1;
	}
	else 
		return 0;
}
int main(int argc, char** argv) {
	int q,*p,n,i;
	cout<<"tedad:";cin>>n;
	p=new int [n];
	for (i=0;i<n;i++){
		cin>>p[i];
	}cout<<p;
	selection_sort (p,n);
	q=check (p,n);
	if (q==1)
		cout<<"yes";
	else
		cout<<"no";
	

	return 0;
}