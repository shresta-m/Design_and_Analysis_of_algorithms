#include<stdio.h>
#include"sort2.h"
using namespace std;
int main()
{
int a[100],b[100],n,j=0,i;
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter the array elements in 0 ,1 and 2\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  countingsort(a,n);
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  }
