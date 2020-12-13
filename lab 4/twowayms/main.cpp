#include<iostream>
#include"twowayms.h"
using namespace std;
int main()
{
	int a[100],i,j,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge2(0,n-1,a);
	for(i=0;i<n;i++)
	printf(" %d\n",a[i]);
	return 0;
}
