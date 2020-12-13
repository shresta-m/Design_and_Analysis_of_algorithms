#include<iostream>
#include"sa2.h"
void bubblesort(int a[],int n)
{
	 int temp;
        for (int i=0;i<n-1;i++)
         {
          for (int j=0;j<n-i-1;j++)
           {
                 if (a[j] > a[j+1]) 
                {
                  temp      = a[j];
                  a[j]   = a[j+1];
                  a[j+1] = temp;
                 }
           }
  }

	
}
int sumarray(int a[],int n,int p,int flag)
{
    for(int i=0;i<n;i++)
	{
		int beg=i+1,end=n-1;
		int mid;
		while(beg<=end)
		{
			mid=(beg+end)/2;
			if(a[mid]==p-a[i])
			{
				flag=1;
				return flag;
			}
			else if (a[mid]<p-a[i])
			{
				end=mid-1;
			}
			else
			{
			beg=mid+1;
			//printf("#");
		        }
		}
	}
}
