#include<stdio.h>
#include"sa2.h"
using namespace std;
int main()
{
       int a[100],n,p,i,j,flag=0;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the integer p\n");
	scanf("%d",&p);
	bubblesort(a,n);
	printf("the sorted array is \n");
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	int k=sumarray(a,n,p,flag);
	if(k==1)
	{
	   printf("the pair exists\n");
	   }
	   else
	   {
	   printf("the pair doesn't exists\n");
	   }
}
