//iterative approach logic 1
#include<stdio.h>
#include "gcd1.h"
using namespace std;

int main()
{
        int n1,n2,g;
        printf("\n enter two numbers\n");
        scanf("%d%d",&n1,&n2);
        n1 = ( n1 > 0) ? n1 : -n1;
        n2 = ( n2 > 0) ? n2 : -n2;
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
        int min=n1<n2?n1:n2;
        int max=n1>n2?n1:n2;
        gcd(min,max,g);
        printf("gcd is %d",g);
        
}
