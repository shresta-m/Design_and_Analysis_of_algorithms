#include<stdio.h>
#include"gcd3a.h"
using namespace std;
int main()
{
   int n1,n2,gcd=1;
   printf("\n enter two numbers\n");
   scanf("%d%d",&n1,&n2);
   int min=n1<n2?n1:n2;
   int max=n1>n2?n1:n2;
   if(n1==0)
	{
	printf("\n %d",n2);
	return 0;
	}
    else if(n2==0)
     {
	printf("\n %d",n1);
	return 0;
     }
     printf("%d",n1*n2/(lcm(min,max)*max));
   }
