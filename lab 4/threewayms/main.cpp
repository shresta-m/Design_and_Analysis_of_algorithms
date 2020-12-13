#include<stdio.h>
#include"threewayms.h"
using namespace std;



int main()
{ int a[]={6,2,4,3,5,1};
merge3way(a,6);
for(int i=0;i<6;++i)
printf("%d ",a[i]);
return 0;
}
