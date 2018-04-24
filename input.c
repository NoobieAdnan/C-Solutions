#include "sort.h"
#define NUM_SIZE 10
#define STR_SIZE 50
/*int strlen(char * str)
{
	int i =0;
	while(str[i]!='\0'){
	i++;
	}
	return i;
}
*/

int readint()
{
	char num [NUM_SIZE]= {0};
	fgets (num, NUM_SIZE, stdin);
	return atoi(num);
}

char readchar()
{
	char c[NUM_SIZE]= {0};
	fgets(c,NUM_SIZE,stdin);
	return c[0];
}

void readstring(char * str)
{
	fgets(str,STR_SIZE,stdin);
	str [strlen(str) -1] = '\0';
	return ;
}
