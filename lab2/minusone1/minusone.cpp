#include<iostream>
int minusone(int a[],int n)
{
int j=0;
while(j<n)
{
	if(a[j]<a[j+1])
	{
		j++;
	}
	else
	{
           return j+2;
	}
}
}

