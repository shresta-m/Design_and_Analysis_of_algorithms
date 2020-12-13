#include<iostream>
#include"gcd4.h"
int ngcd(int a[],int n)
{
  int gcd;
     for(int j=1;j<=a[0];j++)
   { 
   int flag=1;
    for(int i=0;i<n;i++)
       {
	if(a[i]%j!=0)
	flag=0;
	}
    if(flag==1)
	gcd=j;
   }
   return gcd; 
}
