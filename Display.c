#include "bst.h"

void postorder(node * root)
{
		node * temp = root;
		if(NULL == temp){
				printf("No Elements are present in the tree.\n");
		}
		if(temp->left_child != NULL)
				postorder(temp->left_child) ;
		if(temp->right_child != NULL)
				postorder(temp->right_child) ;
		printf("[%d]->",temp->data) ;
}

void preorder(node * root)
{
		node *temp = root ;
		if(NULL == temp)	{
				printf("No Elements are present in the tree.\n") ;			
		}

		printf("[%d]->",temp->data) ;

		if(NULL != temp->left_child)
				preorder(temp->left_child) ;

		if(NULL != temp->right_child)
				preorder(temp->right_child) ;

}

void inorder( node * root)
{

		node * temp = root ;
		if(NULL == root) {
				printf("No Elements are Present in the Tree.\n") ;
		}

		if(NULL != root->left_child)
				inorder (root->left_child) ;
		printf("[%d]->",temp->data) ;

		if(temp->right_child)
				inorder(temp->right_child) ;
}
int height(node * root)
{
		if(NULL == root)
				return 0 ;

		int leftheight = height(root->left_child) ;
		int rightheight = height(root->right_child) ;

		if(leftheight > rightheight)
				return (leftheight + ONE);

		else 
				return (rightheight + ONE) ;
}
void levelorder(node * root)
{
		int h = height (root) ;
		int i ;
		for (i = 1; i <= h ;i++)
				Eachlevel(root,i) ;
}
void Eachlevel(node * root,int level)
{

		if(NULL == root ){
				return ;
		}
		if(level == 1)
				printf("[%d]->",root->data) ;
		else if(level >1) {
				Eachlevel(root->left_child,level - ONE) ;
				Eachlevel(root->right_child,level - ONE) ;
		}
}
