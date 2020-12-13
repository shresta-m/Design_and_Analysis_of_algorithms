#include<stdio.h>
#include"gcd4a.h"
using namespace std;
int main()
{
   int a[20],n,i,j,k=0;
printf("\n enter the size  of array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(int j=0;j<n;j++)
{
 if(a[j]==0)
 {
    k++;
    }
    }
    if(k==n)
    {
    printf("%d",a[n-1]);
    }
    else
    {
int min;
for(i=0;i<n;++i)
if(a[i]!=0)
{
min=a[i];
break;
}
for(i=1;i<n;i++)
{
	
	if(a[i]<min)
	{
		min=a[i];
	}
}
for(i=0;i<n;i++)
{
	if(a[i]==0)
	a[i]=min;
}
printf("\n %d",gcd(a,n));

}
}
