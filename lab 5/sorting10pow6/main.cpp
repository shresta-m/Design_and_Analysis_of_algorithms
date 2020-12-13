#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sorting.h"
#define n 1000000
using namespace std;
int main()
{
	//input
	srand(time(0));
	int a[1000000],i=0;
	for(i=0;i<1000000;++i)
	a[i]=rand();
	
	printf("1");
	
	mergesort(a,0,n-1);
	printf("1");
	return 0;
	
}