#include<iostream>
#include"gcd1.h"
int gcd(int n1,int n2,int g)
  {
     g=1;
    for( int i=1;i<=n1&&i<=n2;++i)
	if(n1%i==0&&n2%i==0)
	{
	g=i;
	}
   }
