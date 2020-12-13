#include<stdio.h>
#include"gcd4a.h"
int divbyall(int a[],int n,int i)
{ int flag=1,j;
	for( j=0;j<n;++j)
	if(a[j]%i!=0)
		flag=0;
return flag;
}
int gcd(int a[],int n)
{	static int i=1,j=1;
	if(divbyall(a,n,i))
	j=i;
	if(i<a[0])
{
	++i;
	gcd(a,n);
}
	return j;
}

