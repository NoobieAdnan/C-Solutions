#include "bst.h"
int main () 
{
		int data ;
		node *  root = NULL;
		int choice ;
		int search ;
		int result ;

		while (ONE)
		{
				printf("\n1.Insertion in a Binary Search tree.\n") ;
				printf("2.Deletion in a Binary Search tree.\n") ;
				printf("3.Searching in a Binary Serchg tree.\n") ;
				printf("4.Inorder traversal of Binary Search tree.\n") ;
				printf("5.Preorder traversal of Binary Search tree.\n") ;
				printf("6.Postorder traversal of Binary Search tree.\n") ;
				printf("7.Level-order traversal of Binary Search tree.\n") ;
				printf("8.Exit.\n");

				choice = readint() ;

				switch (choice)
				{

						case 1 :
								printf("Enter the Data value to be Inserted in BST.\n");
								data = readint() ;
								root = InsertatBST(root,data) ;
								if(root != NULL)
										printf("--------Element Inserted into a BST-----------\n") ;
								break ;

						case 2 :
								printf("Enter the Data value to be Deleted in BST.\n");
								data = readint() ;
								if(ONE == SearchatBST(root,data)){
										root = DeleteatBST(root,data) ;
										printf("----------[%d] is Deleted from the BST--------\n",data);
								}
								else {
										printf("-----------%d] Not Found in a  BST------------\n",data) ;
								}
								break ;

						case 3 :
								printf("Enter the Data value to be Searched in BST.\n");
								search = readint() ;
								result = SearchatBST(root,search) ;
								if (result == ONE) {
										printf("--------Element found in a tree----------------\n") ;
								}
								else {
										printf("--------Element Not found in a tree------------\n") ;
								}
								break ;

						case 4 :
								printf("----------------The Elements in Indorder traversal of BST tree.---------\n");
								inorder(root) ;
								break ;

						case 5 :
								printf("----------------The Elements in Preorder traversal of BST tree.----------\n");
								preorder(root) ;
								break ;

						case 6 :
								printf("----------------The Elements in Postorder traversal of BST tree.------\n");
								postorder(root) ;
								break ;

						case 7 :
								printf("----------------The Elements in Levelorder traversal of BST tree.------\n");
								levelorder(root);
								break ;
						case 8 :
								printf("-------------BYE-------------------------------------------------------\n");
								exit(ZERO) ;

						default:
								printf("Wrong Choice Re-Enter Choice.\n");
								break;
				}
		}

		return 0 ;
}
