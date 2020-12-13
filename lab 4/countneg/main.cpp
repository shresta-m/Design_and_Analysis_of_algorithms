#include<iostream>
#include"countneg.h"
using namespace std;
int main()
{
	int a[100],i,j,n;
	int count=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	count1(0,n-1,a,&count);
	printf("count is %d",count);
	return 0;
}