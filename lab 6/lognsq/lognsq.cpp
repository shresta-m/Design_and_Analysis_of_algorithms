#include<iostream>
#include"lognsq.h"
using namespace std;

void add(int b[],int j,int n,int pro[])
{int i;
int c=0;
for(i=0;i<=n;++i)
{
	int p=pro[i+j];
	pro[i+j]=(p^b[i]^c);
	if((p&&b[i])||(c&&(p!=b[i]))) c=1;
	else
	c=0;
}

}

void multiply(int b[],int n,int pro[])
{
for(int j=0;j<n;++j)
if(b[j]==1)
{
add(b,j,n,pro);
}
}