#include<iostream>
#include"bstsort.h"
using namespace std;

int main()
{
	int i,k,j,m,a[20][20],n[100];
	struct node *tptr=NULL;
   printf("Enter the number of the array: ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("Enter the size of array %d:",i+1);
		scanf("%d",&n[i]);
		m=m+n[i];
		printf("Enter the array %d: \n",i+1);
		for( j=0;j<n[i];j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<n[i];j++)
	insert(a[i][j],&tptr);
}
	
 printf("sorted list\n");
inorder (tptr);
}
