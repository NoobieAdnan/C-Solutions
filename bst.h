
#ifndef _BST_H
#define _BST_H
#include "bst.h"
#include <stdio.h>
#include <stdlib.h>
#define ONE 1
#define ZERO 0
#define NUM_SIZE 10
#define STR_SIZE 10 
/*Structure Defination to a Node of a Bainary Search tree*/
typedef struct node 
{
	struct node *left_child ;
	int data ;
	struct node *right_child ;
}node;

/*Function Defination to Insert the Node into a Given BST*/
node * InsertatBST (node *, int) ;

/*Function Defination to Search for an Node in a Tree*/
int SearchatBST(node *, int) ;

/*Function defination to display Postorder Traversal of a Given BST*/
void postorder(node *) ;

/*Function Defination to display Preorder Traversal of a Given BST*/
void preorder(node *) ;

/*Function Defination  to display Inorder Traversal of a Given BST*/
void inorder(node *) ;

/*Function Definaton to Print the Node at Each Level*/
void Eachlevel (node *,int) ;

/*Function Defination to Return the Height of a Given Tree*/
int height (node *) ;

/*Function Defination to display Levelorder traversal of a Given tree */
void levelorder (node *) ;
 
/*Function Defination to read an Integer Value usinf fgets*/
int readint() ;

/*Function Defination of my atoi Implementation*/
int myatoi(char *) ;

/*Function Defination to Create a New Node*/
node * new_node(int) ;

/*Function Defination to Find the Minimum value in a BST*/
node * MinValue (node *) ;

/*Function Defination to Delete the Node from a Given BST if Present */
node * DeleteatBST (node * ,int );
#endif
