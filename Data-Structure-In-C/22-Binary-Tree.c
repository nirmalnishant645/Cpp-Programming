//Program to create Binary Tree
#include<stdio.h>
#include<stdlib.h>
struct tnode{
    int data;
    struct tnode *right;
    struct tnode *left;
};
struct tnode *CreateBST(struct tnode *, int);
int main(){
    struct tnode *root = NULL;
    int choice, item, n, i;
    do{
	printf("\nBinary Search Tree Operations:");
	printf("\n1. Create of BST");
	printf("\n2. Exit");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	    root = NULL;
	    printf("\nBST for How Many Nodes? ");
	    scanf("%d",&n);
	    for(i = 1; i <= n; i++){
		printf("\nEnter data for node %d: ", i);
		scanf("%d",&item);
		root = CreateBST(root,item);
	    }
	    printf("\nBST with %d nodes is ready to Use!!\n", n);
	    break;
	case 2:
	    printf("\nTerminating\n");
	    exit(0);
	    break;
	default:
	    printf("\nInvalid Option, try again!\n");
	    break;
	}
	}
	while(choice != 5);
	getch();
    return 0;
}
struct tnode *CreateBST(struct tnode *root, int item){
    if(root == NULL){
	root = (struct tnode *)malloc(sizeof(struct tnode));
	root->left = root->right = NULL;
	root->data = item;
	return root;
    } else {
	if(item < root->data)
	    root->left = CreateBST(root->left,item);
	else if(item > root->data )
	    root->right = CreateBST(root->right,item);
	else
	    printf("\nDuplicate Element, not allowed!");
	return(root);
    }
}


