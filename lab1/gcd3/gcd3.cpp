#include<iostream>
#include"gcd3.h"
int gcd(int n1,int n2,int max,int min)
{
   int i=1,g;
   while((i*max)%min!=0 && i<=min)
   {
     ++i;
    }
     g=(n1*n2)/(i*max);
     return g;
}
