#include "bst.h"
/*Function to Create a new node 
  Return type - Pointer to created node */
node * new_node(int data)
{
		node * new = (node *)malloc(sizeof(node)) ;/*Allocating Memory*/
		new->data = data ; /*Setting a data to Node of new data*/
		new->left_child = NULL ; /*Setting of left child as NULL*/
		new->right_child = NULL ;/*Setting of right child as NULL*/
		
		return new ; /*Returing a Pointer to Node*/
}

node * InsertatBST (node * root ,int data)
{

		if(NULL == root){
				return new_node(data) ;
		}

		if (data < root->data)
		{
				root->left_child = InsertatBST(root->left_child ,data) ;		
		}
		else if(data > root->data){
				root->right_child = InsertatBST(root->right_child,data) ;
		}

		return root ;
}

