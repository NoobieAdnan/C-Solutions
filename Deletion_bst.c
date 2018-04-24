#include "bst.h"
node * DeleteatBST (node * root,int data)
{
		if(root == NULL)
				return root ;

		if(data < root->data)
				root->left_child = DeleteatBST (root->left_child , data) ;

		else if (data > root->data)
				root->right_child = DeleteatBST(root->right_child,data);

		else { 

				if(root->left_child == NULL)
				{
						node *temp = root->right_child;
						free(root);
						return temp;

				}
				else if (root->right_child == NULL)
				{
						node *temp = root->left_child;
						free(root);
						return temp;
				}

				node* temp = MinValue(root->right_child);

				root->data = temp->data;

				root->right_child = DeleteatBST(root->right_child, temp->data);
		}
		return root;
}
node * MinValue(node * root)
{
		node * current = root ;
		while(current->left_child != NULL)
		{
				current = current->left_child ;

		}
		return current ;
}

int SearchatBST (node * root ,int data)
{
	if(root != NULL){

		if(root->data == data)
		return ONE ;
	

		if(data > root->data) 
		return SearchatBST (root->right_child,data)  ;
			
	
		else 
		return SearchatBST (root->left_child,data) ;
	}
	return ZERO ;
}
