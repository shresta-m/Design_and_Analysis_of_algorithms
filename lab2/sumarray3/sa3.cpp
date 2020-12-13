#include<iostream>
#include"sa3.h"
int sumarray(int a[],int n,int p,int flag)
{
    int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	
	}
      int i, temp; 
     int s[max];
  for(int i=1;i<max;i++)
  {
    s[i]=0;
    }
    for (int i = 0; i < n; i++) 
    { 
        temp = p - a[i]; 
        if (s[temp] == 1) 
            flag=1;
        s[a[i]] = 1; 
    }
    return flag; 
} 
