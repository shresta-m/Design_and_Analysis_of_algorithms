#include<iostream>
#include"gcddc.h"
using namespace std;
int gcd(int n1,int n2)
{
	if(n1>n2)
	gcd(n1-n2,n2);
	else if(n2>n1)
	gcd(n1,n2-n1);
	else
	return n1;
}
int gcdn(int b,int e,int a[])
{
	if(e-b>1)
	{
		int m=(b+e)/2;
	int k=	gcdn(b,m,a);
	int l=	gcdn(m+1,e,a);
	return gcd(k,l);
	}
	if(e-b==0)
	{
		return a[b];
	}
	if(e-b==1)
	{
		 return gcd(a[e],a[b]);
	}
	
}