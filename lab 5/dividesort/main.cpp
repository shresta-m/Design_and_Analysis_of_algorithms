#include<iostream>
#include"dividesort.h"
using namespace std;
int main()
{	
	int arr[4][4]={{1,2,3,4},{-1,0,23,100},{-1,0,23,100},{2000,2552,3000,4000}};
	int i=0;
	divide(0,3,arr);
	for(i=0;i<16;++i)
	printf("%d ",arr[0][i]);
	return 0;
}
