#include<iostream>
#include"incresort.h"
using namespace std;
void merge(int a[],int b[],int n1,int n2,int d[])
{
	int i=0,j=0,k=0;
	while(i<n1&&j<n2)
	{
		if(a[i]<b[j])
		d[k++]=a[i++];
		else
		d[k++]=b[j++];
		
	}
	while(i<n1) d[k++]=a[i++];
	while(j<n2) d[k++]=b[j++];
	//for(i=0;i<16;++i)	
	//printf("%d",d[i]);
	
}

void mergearray(int arr[][4],int d[])
{	int i=1;
	 
	int n1=4;
	int n2=4;
	int j=0;
	for(j=0;j<4;++j)
	d[j]=arr[0][j];
	while(i<4)
	{	int l=0;
		int temp[100]; 
		for(l=0;l<n1;++l)
		temp[l]=d[l];
		merge(temp,arr[i++],n1,n2,d);
		n1=n1+4;
			
	}
}