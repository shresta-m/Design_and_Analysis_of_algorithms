#include<iostream>
#include"lognsq.h"
using namespace std;

int main()
{
int pro[100]={0};
int n,b[40];
printf("enter the value of n\n");
scanf("%d",&n);
int i=0;
while(n>1)
{
b[i]=n%2;
n=n/2;
i++;

}
b[i]=1;
b[++i]=0;
printf("the binary repn is \n");
for(int j=i-1;j>=0;--j)
printf("%d",b[j]);
printf("\n");
multiply(b,i,pro);
printf("the square is\n");
for(int j=2*i-1;j>=0;--j)
printf("%d",pro[j]);
printf("\n");
return 0;
}