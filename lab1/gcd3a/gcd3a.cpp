#include<iostream>
#include"gcd3a.h"
int lcm(int n1,int n2)
{ 
    static int i=1;
    if((i*n2)%n1==0)
    return i;
     i++;
   lcm(n1,n2);
    return i;
}
