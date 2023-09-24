#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int binary_search(int a[],int x , int n)
{
	int low=0,high=n-1,mid;
	while(low<=high);
	{
	mid=(low + high)/2;
	if(x == a[mid]) return(1);
	if(x > a[mid]) low=mid+1;
	if(x < a[mid]) high=mid-1;
	}
	return(-1);
}
int main(int argc, char** argv) {
	int d,a[4],b,c;
	for (b=0;b<4;b++){
		cin>>a[b];
	}
	cout<<"adad moghaiese:";cin>>c;
	binary_search(a,c,a[4]);

	return 0;
}
