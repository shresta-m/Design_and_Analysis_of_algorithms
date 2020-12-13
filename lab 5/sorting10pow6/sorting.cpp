#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sorting.h"
#define n 1000000

void merge(int a[],int b,int m,int e)
{
	int i, j, k; 
    int n1 = m-b+1; 
    int n2 =e-m; 
  
    int L[n1], R[n2]; 
  
    for (i =0;i<n1;i++) 
        L[i] = a[b+i]; 
    for (j=0;j<n2;j++) 
        R[j] = a[m+1+j]; 
  
    
    i =0; 
    j =0;  
    k =b;  
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            a[k] = L[i]; 
            i++; 
        } 
    	else
        { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    a[k++] = L[i++]; 
  
    while (j < n2) 
    a[k++]=R[j++]; 
  
}

void insertionsort(int a[],int b,int e)
{
	int i,j,key;
	for(i=b;i<=e;++i)
	{key = a[i]; 
    j = i - 1; 
	while (j >= 0 && a[j] > key) 
	{ 
        a[j + 1] = a[j]; 
        j = j - 1; 
    } 
        a[j + 1] = key; 
		
	}
}

void mergesort(int a[],int b,int e)
{
	if(b-e<=10000)
	{
		insertionsort(a,b,e);
		printf("1");
		return;	
	}
	int m=(b+e)/2;
	mergesort(a,0,m);
	mergesort(a,m+1,e);
	merge(a,b,m,e);

}