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
