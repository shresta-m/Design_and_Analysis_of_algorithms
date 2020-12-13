#include<stdio.h>
#include"minusone.h"
using namespace std;
int  main()
{
int a[10000],ch=1,i=0;
while(ch==1)
{
scanf("%d",&a[i]);
++i;
printf("\nwant to enter more?");
scanf("%d",&ch);
}
int n=i+1;
printf("index is %d",minusone(a,n));
}
