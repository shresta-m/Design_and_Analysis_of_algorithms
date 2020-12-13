#include<iostream>
#include"pattern.h"
int pattern1(int n)
{
 for(int i=n;i>=1;i--) //1
	{for(int j=1;j<=i;++j)
	printf("%d ",j);
	printf("\n");
	}
}
int pattern2(int n)
{
   for(int i=1;i<=n;++i) //2
	{for(int j=i;j<=n;++j)
	printf("%d ",j);
	printf("\n");
	for(int j=0;j<i;++j)
	printf("  ");
	}
	printf("\n");
}
int pattern3(int n)
{
for(int i=1;i<=n;i++)//3
	{for(int j=1;j<=i;++j)
	printf("%d ",j);
	printf("\n");
	}
	printf("\n");
	
}
int pattern4(int n)
{
for(int i=n;i>=1;--i)//4
	{for(int j=0;j<i;++j)
	printf("  ");
	for(int j=i;j<=n;++j)
	printf("%d ",j);
	printf("\n");
	
	}
	printf("\n");

}
int pattern5(int n)
{
for(int i=1;i<=n-1;++i)//5
	{for(int j=i;j<=n-1;++j)
	{
	printf(" %d",j);
	}

	for(int j=n;j<=2*n-1-i;++j)
	printf(" %d",j);
	
	printf("\n");
	if(i!=n-1)
	for(int j=0;(j<i);++j)
	printf("  ");
	}
}
int pattern6(int n)
{
    for(int i=n-1;i>=1;--i)//6
	{
	for(int j=0;j<i-1;++j)
	printf("  ");
	for(int j=i;j<=n-1;++j)
	printf(" %d",j);
	for(int j=n;j<=2*n-1-i;j++)
	printf(" %d",j);
	printf("\n");
	
	}
}

