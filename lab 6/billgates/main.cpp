#include<iostream>
#include"minmax.h"
using namespace std;


int main()
{
int min,max;
int n,a[100];
printf("enter the value of n\n");
scanf("%d",&n);
for(int i=0;i<n;++i)
scanf("%d",&a[i]);

minmax(a,n,&min,&max);


printf("\nmin=%d max=%d\n",min,max);
return 0;
}
