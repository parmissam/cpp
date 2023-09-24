#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char z;
	int c,a,b,i,A,q,sum,fact=1,x;
	while(A!=7)
		{	printf ("\n\n\t\tchoose one from below" ); printf("\n1.sum of five numbers"); printf("\n2.factorial"); 
		printf("\n3.tavan a^b"); printf("\n4.adad/harf/neshane"); printf("\n5.print n char"); 
		printf("\n6.tabdil harf"); printf("\n7.end") ;
		cout<<"\n\t\tentekhab shoma:";
		cin>>A;
		switch (A)
			{
			case 1:
			{	sum=0;
				for (i=1; i<=5; i++)
					{
					cout<<"q=";
					cin>>q;
					sum+=q;}
				cout<<"sum="<<sum;
				break;}
			
			case 2:
			{
				cout<<"x="; cin>>x;
				fact=1;
				if (x<0)
				{	cout<<"try again";
				}
				else
					if(x==0)
					{	cout<<"fact="<<0;
					}
					else
					{
					
						for(i=1;i<=x;i++){
							fact=fact*i;
						}
						cout<<"fact="<<fact;}
				break;}
				
			case 3:
			{
				cout<<"paie";
				cin>>a;
				cout<<"tavan";
				cin>>b;
				c=pow(a,b);
				cout<<c;
				break;	}
			case 4:{
				cout<<"alamat mored nazar ra vared konid:";
				cin>>z;
				{
					if((z>= 65 && z<= 90)||(z>= 97 && z<= 122))
		        	{
						cout << " Alphabet ";
					}
					else
						
						if(z>= 48 && z<= 57)
			        			{
								cout << " number ";}
						else
							{
								cout<<"neshane";}
			}
				break;
			}	
			case 5:{
				cout<<"chand bar print shavad:";
				cin>>a;
				cout<<"character:";
				cin>>z;
				for (i=1; i<=a; i++){
					cout<<(char)z;
				}
				break;
			}	
			case 6:{
				cout<<"alphabet:";
				cin>>z;
				if(z>= 97 && z<= 122)
					{
					cout<<(char)(z-32);}
				else
				if(z>= 65 && z<= 90)
					{cout<<(char)(z+32);
					}
					else
						{cout<<"not an alphabet-->"<<(int)z;
						}
				break;
			}

	}
		
		
	
		
		}
	return 0;}
