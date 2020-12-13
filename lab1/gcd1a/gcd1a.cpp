#include<iostream>
#include"gcd1a.h"
int gcd(int n1,int n2)
{	static int i=1,j=1;
	if(n1%i==0&&n2%i==0)
	j=i;
	if(i<n1)
{
	++i;
	gcd(n1,n2);
}
	return j;
}
