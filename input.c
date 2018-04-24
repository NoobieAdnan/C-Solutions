#include "bst.h"
/*Function to take input from the User */
int readint ()
{
		char num [NUM_SIZE] = {0} ;
		fgets (num, NUM_SIZE, stdin) ;
		return myatoi(num) ;
}

/*Function to Implement my own atoi*/
int myatoi (char *str)
{
		int i , n = 0 ;

		for (i = 0 ; str[i] != '\n'; i++ ) {

				n = (n * 10)  + str[i] - '0' ; 
		}	
		return n ;
}
