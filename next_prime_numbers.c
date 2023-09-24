#include <stdio.h>
#include <math.h>
int * get_next_prime_numbers(int m, int n, int *arr){
    int j=m+1,i,k=0,r=0;
    while(r != n){
        for(i=2;i<=sqrt(j);i++){
            k=0;
            if(j%i==0){
               k=1;
               i=j;
            }
        }
        if(k==0 && j!=0){
            arr[r]=j;
            r++;
        }
        j++;
    }
    return arr;
}

int main()

{

   int i, n, m;

   scanf("%d %d", &m, &n);

   int arr[n];

   int *primes = get_next_prime_numbers(m, n, arr);

   for (i = 0; i < n; i++)

   {

       printf("%d\n", *(primes + i));
       //printf("%d\n",arr[i]);

   }

   return 0;
   float y=1.23456;
   printf("\n3.3%f",y);

}
