#include<stdio.h>
#include "nlogn.h"
void min1(int a[],int n,int lg)
{
	for(int j=2;j<=pow(2,lg);j*=2)
	
	for(int i=0;j*i<n;++i)
		if(a[j*i+j/2]<a[j*i])
		{int temp=a[j*i];
		 a[j*i]=a[j*i+j/2];
		 a[j*i+j/2]=temp;
		}
/*	for(int i=0;4*i<n;i+=1)
		if(a[4*i+2]<a[4*i])
		{int temp=a[4*i];
		 a[4*i]=a[4*i+2];
		 a[4*i+2]=temp;
		}
	for(int i=0;8*i<n;i+=1)
		if(a[8*i+4]<a[8*i])
		{int temp=a[8*i];
		 a[8*i]=a[8*i+4];
		 a[8*i+4]=temp;
		}*/
		for(int i=0;i<n;++i)
		printf("%d*",a[i]);
	
}

int min2(int a[],int n,int lg)
{
	int minni=a[2];
	for(int i=4;i<pow(2,lg);i*=2)
	if(a[i]<minni)
	minni=a[i];
	return minni;
}