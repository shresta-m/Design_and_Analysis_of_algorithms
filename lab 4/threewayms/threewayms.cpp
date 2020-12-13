#include<stdio.h>
#include"threewayms.h"
using namespace std;

void merge(int a[],int b,int m1,int m2,int e,int da[])
{
int i=b,j=m1,k=m2,l=b;

while((i<m1)&&(j<m2)&&(k<e))
{
if(a[i]<a[j])
{if(a[i]<a[k])
	da[l++]=a[i++];
 else
	da[l++]=a[k++];
}
else
{if(a[j]<a[k])
	da[l++]=a[j++];
 else
	da[l++]=a[k++];
}
}

while((i<m1)&&(j<m2))
{
if(a[i]<a[j])
	da[l++]=a[i++];
else
	da[l++]=a[j++];
}

while((k<e)&&(j<m2))
{
if(a[j]<a[k])
	da[l++]=a[j++];
else
	da[l++]=a[k++];
}

while((i<m1)&&(k<e))
{
if(a[i]<a[k])
	da[l++]=a[i++];
else
	da[l++]=a[k++];
}

while(i<m1) da[l++]=a[i++];
while(j<m2) da[l++]=a[j++];
while(k<e) da[l++]=a[k++];
}

void mergerec(int da[],int b,int e,int a[])
{
if(e-b<2)
return;

int m1=b+((e-b)/3);
int m2=b+2*((e-b)/3)+1;

mergerec(a,b,m1,da);
mergerec(a,m1,m2,da);
mergerec(a,m2,e,da);

merge(a,b,m1,m2,e,da);
}



void merge3way(int a[],int n)
{if(n==0) return;
	int da[n];

for(int i=0;i<n;++i)
da[i]=a[i];

mergerec(da,0,n,a);

for(int i=0;i<n;++i)
a[i]=da[i];
}