#include<iostream>
#include<math.h>
#include"primality.h"
using namespace std;


int main()
{
	int n,a[1000],flag=1;
	printf("\nenter n:\n");
	scanf("%d",&n);

	primality(a,n,&flag);
	if(flag==1)
	printf("\n%d is prime\n",n);
	else
	printf("\n%d is composite\n",n);
	return 0;
}	
