#include<stdio.h>
#include"sort1.h"
using namespace std;
int main()
{
   int  a[100],b[100],n;
   printf("enter the array size\n");
   scanf("%d",&n);
   printf("enter the array elements in 0 ,1 and 2\n");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   sort(a,n,b);
   printf("the array elements are ");
   for(int j=0;j<n;j++)
   printf("%d",b[j]);
   }
