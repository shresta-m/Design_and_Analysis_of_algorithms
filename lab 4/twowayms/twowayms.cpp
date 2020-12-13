#include<iostream>
#include"twowayms.h"
using namespace std;
void merge(int a[],int b,int m,int e )
{
	int i,j,k,n1,n2;
	n1=m-b+1;
	n2=e-m;
	int c[n1],d[n2];
	for(i=0;i<n1;++i)
	c[i]=a[b+i];
	for(i=0;i<n2;++i)
	d[i]=a[m+i+1];
	i=0;j=0;k=b;
	while(i<n1&&j<n2)
	{if(c[i]<d[j])
	{a[k]=c[i];
	++i;
	}
	else
	{a[k]=d[j];
	j++;
	}
	k++;
	}
	
	while(i<n1)
	{
	a[k]=c[i];
	++i;++k;
	}
	while(j<n2)
	{a[k]=d[j];
	++j;++k;
	}
	
 } 
    
void merge2(int b,int e,int a[])
{
if(b<e)
{
	int m=(b+e)/2;
merge2(b,m,a);
merge2(m+1,e,a);
merge(a,b,m,e);
}
	
}