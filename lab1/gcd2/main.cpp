//iterative approach of logic 2
#include<stdio.h>
#include"gcd2.h"
using namespace std;
int main()
{
        int n1,n2;
	printf("enter the 2 nos\n");
	scanf("%d%d",&n1,&n2);
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
       printf("gcd is %d",gcd(n1,n2));
       }
