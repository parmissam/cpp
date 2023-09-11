                                                گرفتن دو ارایه دو بعدی
for(i=0;i<3;i++)
  for(j=0;j<4;j++)
    cin>>a[i][j]>>b[i][j];
                                      مرتب سازی انتخابی selection sort 
void selection_sort(int a[] , int n)
{
  int i,j,T;
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[i]>a[j])
        {
        T=a[i];
        a[i]=a[j];
        a[j]=T;
        }
}
                                                Bubble sort حبابی
void bubble_sort(int a[] , int n)
{
  int T,i,j,n=10;
  for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
      if(a[j]>a[j+1])
        {
        T=a[j];
        a[j]=a[j+1];
        a[j+1]= T;
        }
        }
                                                  جستجو در ارایه
                                                  خطی:
int search(int a[] ,int x , int n)
{
  int f=0,i;
  for(i=0;i<n;i++)
    if(a[i]==x)
      {
      f=1;
      break;
      }
      if(f)  || if( f==1)
        return(1);
      else
        return(0);
        }
                                                  باینری
int binary_search(int a[],int x , int n)
{
int low=0,high=n-1,mid;
while(low<=high);
  {
  mid=(low + high)/2;
  if(x == a[mid]) 
    return(1);
  if(x > a[mid]) 
    low=mid+1;
  if(x < a[mid]) 
    high=mid-1;
  }
return(0);
}.........................................................................................
                                    1.مساحت مستطیل
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		float x,y,A;
	cout<<"calculating rectangles area\n";
	
	cout<<"x="; cin>>x;
	cout<<"y="; cin>>y;
	A=x*y;
	cout<<"Area="<<A;
	return 0;
	return 0;
} 
                                      2.محیط و مساحت دایره
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float r,A,P;
	cout<<"circles area and perimeter\n";
	cout<<"r="; cin>>r;
	A=r*r*3.14;
	P=2*r*3.14;
	cout<<"area="<<A;
	cout<<"\nperimeter="<<P;
	
	return 0;
}


 
                                              3.y=2x^3+3x^2+x+5
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float x,y;
	cout<<"\t\t\tquadratic equation"<<"\nx=";
	cin>>x;
	y=2*x*x*x+3*x*x+x+5;
	cout<<"y="<<y;
	return 0;
}


 
                                          4. معادله درجه دو
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"quadratic equation\n";
	float a,b,c,delta,x1,x2;
	cout<<"a="; cin>>a;
	cout<<"\nb="; cin>>b;
	cout<<"\nc="; cin>>c;
	delta=b*b-4*a*c;
	if (a==0)
	{	cout<<"try again";
		}
	else {
	
		if  (delta>0) 
		{	
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			cout<<"x1="<<x1;
			cout<<"\nx2="<<x2;
			}
		if (delta==0)
		{
			x1=(-b/(2 *a));
			x2=(-b/(2 *a));
			cout<<"the equation has one root\n";
			cout<<"x1="<<x1;
			cout<<"\tx2="<<x2;	
		}
		if (delta<0)
		{	cout<<"the equation has no root";
			}
		
		}
	return 0;
}
 
                                            5.y=sin⁡(x^3 )+3 cos⁡(x^2 )+log_2⁡x
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float x,y;
	cout<<"x="; cin>>x;
	y=(sin(x*x*x))+3*(cos(x*x))+(log10(x)/log10(2));
	cout<<"y="<<y;
	
	return 0;
}


 
                                                  6.s=1+1/2+1/3+⋯+1/n
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n;
	float sum=0;
	cout<<"n="; cin>>n;
	while(n>0)
		{
		sum+=pow(n,-1);
		n--;
		}
	
	cout<<"sum="<<sum;
	
	return 0;
}


                                                          7.بخش پذیری بر5
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x;
	cout<<"x="; cin>>x;
{
		if (x%5==0)
		{cout<<"number is devisible by 5";}
	else
		{cout<<"number is not devisible by 5";
		}
}

	return 0;
}
 
                                                              8.تعداد ارقام هر عدد
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x,m=1;
	cout<<"x="; cin>>x;
	if (x<0)
		{x=x*-1;
		while(x>0)
		{
		x=x/10;
		m=m+1;
		x--;
		}
		cout<<"the number of the digits= "<<m;}
	else
		{
		while(x>0)
		{
		x=x/10;
		m=m+1;
		x--;
		}
		cout<<"the number of the digits= "<<m;}
	return 0;
}


 
                                                8.تعداد ارقام هر عدد راه دیگر
#include <iostream>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a,x,s,c,d;
	cout<<"x=";
	cin>>x;
	
	
	if(x==0)
	cout<<"the number of the digits="<<1;
	
	else
		if(x<0)
			{x=x*-1;
			c= (log10(x));
			while(a<=c)
			{s=s*10;
			a++;}
			d=log10(s)-1;
			cout<<"the number of the digits="<<d;}
		else
			{
			c=double (log10(x));
			while(a<=c)
			{s=s*10;
			a++;}
			d=log10(s)-1;
			cout<<"the number of the digits="<<d;
			}
	return 0;}





                                                            9.فاکتوریل هر عدد
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i,fact=1,x;
	cout<<"x="; cin>>x;
	if(x==0)
	{cout<<"fact="<<0;
	}
	else
	{
	
		for(i=1;i<=x;i++){
			fact=fact*i;
		}
		cout<<"fact="<<fact;}
	return 0;{

                                                        10.حدس عددی که کاربر در نظر دارد

#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{	int a=1,b=1000,c,q,t;
	while (b-a>1)
		{c=(a+b)/2;
		cout<<"press 0 if your number is greater than"<<c;
		cin>>t;
		{
		if (t==0)
			{a=c+1;
			}
		else
			{b=c;
			}
		}
	
		}
	cout<<"press 0 if your number is "<<a;
	cin>>q;
		if(q==0)
		{	cout<<"your number is"<<a;
		}
		else
		{
			cout<<"your number is"<<b;
			}
	return 0;
}
 
                                                                    11. جمع ان عدد ورودی
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{float s=0,x;
int n;
cout<<"n="; cin>>n;

while (n>0){
	cout<<"x="; 
	cin>>x; 
	s+=x;
	n--;
	}
cout<<"s="<<s;	
	
	return 0;{

                                                                          12. به توان رساندن دو عدد
#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float a,b,c;
	cout<<"paie";
	cin>>a;
	cout<<"tavan";
	cin>>b;
	c=pow(a,b);
	cout<<c;
	return 0;
}


