#include<iostream>
#include"sort1.h"
int sort(int a[],int n,int b[])
{
   int j=0;
   for(int i=0;i<n;i++)
  {
  if(a[i]==0)
  {
  b[j]=a[i];
  j++;
  }
  }
   for(int i=0;i<n;i++)
  {
  if(a[i]==1)
  {
  b[j]=a[i];
  j++;
  }
  }
  for(int i=0;i<n;i++)
  {
  if(a[i]==2)
  {
  b[j]=a[i];
  j++;
  }
  }
}
