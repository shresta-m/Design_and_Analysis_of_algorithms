#include<iostream>
#include"quick.h"
using namespace std;

int main()
{
	int n,a[100];
    int k;

	printf("enter the value of n\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);

	printf("\nenter k:\n");
	scanf("%d",&k);

	quicksort(a,0,n-1,k);

	printf("\nk-minimum elements are\n");

	for(int i=0;i<k;++i)
		printf("%d ",a[i]); 
	return 0;
}
