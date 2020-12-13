#include<stdio.h>
#include"gcd4.h"
using namespace std;
int main()
{
   int a[20],n,j,gcd,k;
   printf("\n enter the size  of array\n");
   scanf("%d",&n);
   printf("enter the array elements\n");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(int i=0;i<n;i++)
      {
	if(a[i]==0)
	  {
	   k=0;
	   }
       }
    if(k==0)
	{
	printf("%d",k);
	return 0;
	}
    else
	{
   int min;
   for(int i=0;i<n;++i)
   if(a[i]!=0)
    {
     min=a[i];
     break;
    }
    for(int i=0;i<n;i++)
     {
	
	if(a[i]<min&&a[i])
	{
		min=a[i];
	}
     }
   for(int i=0;i<n;i++)
    {
	if(a[i]==0)
	a[i]=min;
    }
    printf("gcd is %d",ngcd(a,n));

  }
  }
