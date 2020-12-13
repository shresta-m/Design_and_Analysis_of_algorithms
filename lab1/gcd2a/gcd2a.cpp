#include<iostream>
#include"gcd2a.h"
int gcd(int n1,int n2)
{
	if(n1>n2)
	gcd(n1-n2,n2);
	else if(n2>n1)
	gcd(n1,n2-n1);
	else
	return n1;
}
