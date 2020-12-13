#include<stdio.h>
void insert(int*);
void del();
void heapify(int);
int a[10][10],b[100];
int n[10],m=0,k;
int heapsize=0,*heap[100]={0};
int main()
{
	printf("Enter the number of the array: ");
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		printf("Enter the size of array %d:",i+1);
		scanf("%d",&n[i]);
		m=m+n[i];
		printf("Enter the array %d: \n",i+1);
		for(int j=0;j<n[i];j++)
			scanf("%d",&a[i][j]);
	}
	int *p[10];
	for(int i=0;i<k;i++)
	{
		p[i]=&a[i][0];
		insert(p[i]);
	}
	for(int i=0;i<k;i++)
	{
		a[i][n[i]]=NULL;
	}
	int *q,i=0;
	while(i<m)
	{
		b[i]=*heap[0];
		printf(" %d  ",b[i]);
		q=heap[0]+1;
		del();
		if(*q==NULL)
		{
			heapify(heapsize-1);
		}
		if(*q!=NULL)
		{
			insert(q);
		}
		i++;
	}
}
void heapify(int i)
{
	int small=i;
	int l=2*i+1;
	int r=2*i+2;
	int *temp;
	if(l<heapsize && *heap[l]< *heap[small])
		small=l;
	if(r<heapsize && *heap[r]< *heap[small])
		small=r;
	if(small!=i)
	{
		temp=heap[i];
		heap[i]=heap[small];
		heap[small]=temp;
		heapify(small);
	}	
}
void insert(int *q)
{
	heap[heapsize]=q;
	heapsize++;
	int s=(heapsize/2)-1;
	for(int i=s;i>=0;i--)
	{
		heapify(i);
	}
}
void del()
{
	int *min;
	min=heap[0];
	heap[0]=heap[heapsize-1];
	heapsize--;
	heapify(heapsize);	
}
