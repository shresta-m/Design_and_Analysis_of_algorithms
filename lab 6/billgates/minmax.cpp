#include<iostream>
#include"minmax.h"
using namespace std;
void minmax(int a[],int n,int *min,int *max)
{
	if(n%2==1)
{
	a[n]=a[n-1];
	n++;
}

for(int i=0;i<n;i=i+2)
{
if(a[i]>a[i+1])
{
int temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
*min=a[0];
for(int i=2;i<n;i+=2)
{
if(*min>a[i])*min=a[i];
}


 *max=a[1];
for(int i=3;i<n;i+=2)
{
if(*max<a[i])*max=a[i];
}

}
