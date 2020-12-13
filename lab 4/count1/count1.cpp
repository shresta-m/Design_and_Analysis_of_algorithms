#include<iostream>
#include"count1.h"
using namespace std;
void count1(int b,int e,int a[],int *count)
{
if(b<e)
{
	int m=(b+e)/2;
count1(b,m,a,count);
count1(m+1,e,a,count);
}
if(b==e) 
	if(a[b]==1)
	*count=*count+1;	
}