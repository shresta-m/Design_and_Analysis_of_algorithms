#include<iostream>
#include"dividesort.h"
using namespace std;
void merge(int a[],int b[],int d[],int n1,int n2)
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

void divide(int b,int e,int arr[][4])
{ 	int m=(b+e)/2;
	if(b==m)
	{int i;
	int temp[100];
	for(i=0;i<4;++i)
	temp[i]=arr[b][i];
	
	merge(temp,arr[e],arr[b],4,4);
	return;
	}
	divide(b,m,arr);
	divide(m+1,e,arr);
	int i=0;
	int temp[100];
	for(i=0;i<4;++i)
	temp[i]=arr[b][i];
	merge(temp,arr[m+1],arr[b],4,4);
}
