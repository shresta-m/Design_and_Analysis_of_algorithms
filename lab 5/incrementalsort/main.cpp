#include<iostream>
#include"incresort.h"
using namespace std;


int main()
{
	
	int m=4,n=4,i=0;
	 int arr[4][4]={{1,2,3,4},{46,74,87,99},{-1,0,23,100},{2000,2552,3000,4000}};
	int d[16];
	mergearray(arr,d);
	for(i=0;i<16;++i)	
	printf("%d ",d[i]);
	return 0;
}