#include<stdio.h>
#include"sa1.h"
using namespace std;
int main()
{
    int a[100],n,p,j,flag=0;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the integer p\n");
	scanf("%d",&p);
	if(sumarray(a,n,p,flag)==1)
	{
	printf("pair exists\n");
	}
	else
	{
	printf("pair doesn't exists\n");
	}
	
}

