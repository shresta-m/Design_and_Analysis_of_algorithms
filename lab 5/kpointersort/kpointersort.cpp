#include<iostream>
#include"kpointersort.h"
void ksort(int a[][10],int b[],int num,int k,int n[])	
{
	int l=0,i=0;
	int j=0;	
	int *p[10],min,c[10]={0};
	while(j<k)
	{p[j]=&a[j][0];
	++j;
	}
	while(l<num)
	{
		int q=0;
		while(p[q]==NULL)
		q++;
		
		min=q;
		int i;
		for(i=0;i<k;++i)
		{
			if(p[i]==NULL)
				continue;
			if(*p[min]>*p[i])
				min=i;
		}
		b[l]=*p[min];
		++l;
		c[min]++;
		if(c[min]==n[min])
			p[min]=NULL;
		else
			p[min]=p[min]+1;
	}
}