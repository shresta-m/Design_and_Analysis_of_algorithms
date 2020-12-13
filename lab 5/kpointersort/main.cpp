#include<stdio.h>
#include"kpointersort.h"
using namespace std;
	

int main()
{
	int k,n[100],b[100],a[10][10];
	int num=0;
	int j=0;
	
	printf("\nenter number of arrays\n");
	scanf("%d",&k);
	
	for(j=0;j<k;++j)
	{
		printf("\nenter sizeof %d array",j+1);
		scanf("%d",&n[j]);
		
		printf("\nenter array elements");
		num+=n[j];
		
		int i=0;
		for(i=0;i<n[j];++i)
		scanf("%d",&a[j][i]);
	}
	
	ksort(a,b,num,k,n);
	
	printf("sorted array\n");
	for(int i=0;i<num;++i)
	printf("%d ",b[i]);
	return 0;
}