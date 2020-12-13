#include<iostream>
#include"sa1.h"
int sumarray(int a[],int n,int p,int flag)
{
   for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	{
		if(a[i]+a[j]==p)
		{
	          flag=1;
	        }
	  }
	  return flag;
	  }
