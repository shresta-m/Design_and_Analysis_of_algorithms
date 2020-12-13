#include<iostream>
#include"gcddc.h"
using namespace std;
int main()
{
	int a[100],i,j,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the  array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("%d",	gcdn(0,n-1,a));
	
}
