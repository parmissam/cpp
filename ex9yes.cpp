#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	FILE *fp ;
	int i , a;
	char name;
	float grade , sum;
	fp=fopen("A.txt","r+");
	while(!feof(fp))
		{
		fprintf(fp , "%d %s %f", a,name,grade);
		sum+=grade;
		}
	printf("%f",sum);
	fclose(fp);
	return 0;
	
}