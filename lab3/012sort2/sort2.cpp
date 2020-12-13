#include<iostream>
#include"sort2.h"
void countingsort(int a[],int n)
{
   int i,j,count[3]={0,0,0},output[100];
   for(i=0;i<n;++i)
   {count[a[i]]++;
   }
   for(i=1;i<3;++i)
   count[i]+=count[i-1];
   
   for(i=0;i<n;++i)
   {output[count[a[i]]-1]=a[i];
   count[a[i]]--;}

   for(i=0;i<n;++i)
   a[i]=output[i];
}
