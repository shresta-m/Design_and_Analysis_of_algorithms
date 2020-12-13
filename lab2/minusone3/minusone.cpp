#include<iostream>
int minusone(int a[],int n)
{
int i=0;
for(i=0;i<10000;++i)
if(a[i]==0)
a[i]=-1;
i=0;
while(a[i]!=-1)
i=i+1000;
int j=i-1000;
while(a[j]!=-1)
j=j+100;
int k=j-100;
while(a[k]!=-1)
k=k+10;
int l=k-10;
while(a[l]!=-1)
l=l+1;
return (l+1);
}
