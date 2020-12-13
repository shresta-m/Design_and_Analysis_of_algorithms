#include<iostream>
#include"bstsort.h"
using namespace std;
void inorder(struct node *ptr)
{  
  
    if(ptr!=NULL)
      {
	  inorder(ptr->lptr);
      printf("%d\n",ptr->data);
      inorder(ptr->rptr);
}
}
void insert(int x,struct node **tptr)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->lptr=NULL;
	temp->rptr=NULL;
	if(*tptr==NULL)
	*tptr=temp;
	else
	{
		struct node *ptr=*tptr;
		struct node *pptr=NULL;
		while(ptr!=NULL)
		{
			pptr=ptr;
			if(x<ptr->data)
			ptr=ptr->lptr;
			else ptr=ptr->rptr;
		}
		if(x<pptr->data)
		pptr->lptr=temp;
		else 
		pptr->rptr=temp;
	}
	
}