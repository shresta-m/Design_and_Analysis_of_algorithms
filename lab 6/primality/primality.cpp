#include<iostream>
#include<math.h>
#include"primality.h"
using namespace std;

int divisible(int a[],int n,int k)
{
	for(int i=1;k*i-1<n;++i)
		a[k*i-1]=-1;

	if(a[n-1]==-1)
		return 1;

	return 0;
}

void primality(int a[],int n,int *flag)
{
		for(int i=0;i<n;++i)
		a[i]=1;
	
	for(int i=2;i<=pow(n,0.5);++i)
	{	if(divisible(a,n,i)==1)
		{ *flag=0;break;}
	}
}