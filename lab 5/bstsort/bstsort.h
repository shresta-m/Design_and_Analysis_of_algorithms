struct node
{
	int data ;
	struct node *lptr;
	struct node *rptr;
};
void inorder(struct node *ptr);
void insert(int x,struct node **tptr);
