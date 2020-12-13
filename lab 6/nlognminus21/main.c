#include<stdio.h>
#include<math.h>
#include "nlogn.h"

void main()
{
	int n,a[100];
	printf("enter the value of n\n");
	scanf("%d",&n);
	int num=n;
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);
	int i;
	for(i=0;n>0;++i)
	n=n/2;
	for(int j=num;j<pow(2,i);++j)
	{
		a[j]=a[num-1];
	}
	

	min1(a,num,i);
	int min1=a[0];
	
	printf("\nmin1=%d min2=%d\n",min1,min2(a,n,i));
}
