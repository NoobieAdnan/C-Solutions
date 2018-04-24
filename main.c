#include "sort.h"
#define MAX 5 
int main () 
{
	int arr[MAX] ;	
	char buffer[MAX][MAX];
	char ch[MAX] ;
	char buf[MAX] ;
	int choice = 0 ;
	int i;
	int size;
//	char var;
	printf("----------------Bubble Sorting Techniques---------------\n");
	printf("Press 1 to take Integer Input.\n") ;
	printf("Press 2 to take Character Input.\n");
	printf("Press 3 to take String Input.\n");
	
	choice = readint() ;
	
	switch(choice)
	{
		case 1 :
			printf("Enter the Size of an array.\n") ;
			size = readint();
			printf("Enter the Elements in array.\n");
			for(i = 0 ;i < size ; i++){
					arr[i] = readint() ;
			}
			arr[i] = '\0' ;
			bubblesort(arr,sizeof(arr),sizeof(int),compare_int) ;
			printf("The Bubble Sorting of Integer Values are:\n");
			for(i = 0; i < sizeof(arr)/sizeof(int); i++) {
					printf("%d\t",arr[i]);
			}
			printf("\n") ;
			break ;

		case 2:
			printf("Enter the Size of an array.\n") ;
			size = readint();
			printf("Enter the Characters in array.\n");
			for(i = 0 ;i < size ; i++) {
					ch[i] = readchar() ;
			}
			ch[i] = '\0'; 
			bubblesort(ch,sizeof(ch),sizeof(char),compare_char) ;
			printf("The Bubble Sorting of Character Values are:\n");
			for(i = 0; i < sizeof(ch)/sizeof(char); i++) {
					printf("%c\t",ch[i]);
			}
			printf("\n") ;
			break ;
		
		case 3 :
			printf("Enter the Size of an array.\n") ;
			size = readint();
			printf("Enter the Strings in array.\n");
			for(i = 0 ;i < size ; i++){
				readstring(buf);
				strcpy (buffer[i] , buf) ;
			}
			bubblesort(buffer,size,MAX,compare_string) ;
			printf("The Bubble Sorting of Integer Values are:\n");
			for(i = 0; i < sizeof(buffer)/sizeof(char *); i++) {
					printf("%s\t",buffer[i]);
			}
			printf("\n") ;
			break ;

			default :
			printf("Wrong Choice Re-Execute:\n");
			exit(0) ;
			break ;
	}
	return 0 ;
}
