#include "sort.h"

/*Bubble Sorting -- Generic Function*/
void bubblesort(void * arr, size_t data_size, size_t elem_size, int(*compare)(void * x, void * y))
{
	size_t length = data_size/elem_size;
	int i, j;
    
	for(i = 0; i<length; i++){
        	
			for(j = 0; j<length-1; j++){
            		
					if(compare(arr + elem_size * j, arr + elem_size * (j+1))  >  0){
                
							char *temp[elem_size];
                
							memcpy(temp,arr + elem_size*j,elem_size);
                
							memcpy(arr + elem_size*j,arr + elem_size * (j+1), elem_size);
                
							memcpy(arr + elem_size * (j+1),temp, elem_size);
            
					}
        
			
			}	
		

    }

	
}

int compare_int(void * x, void * y)
{
    int * val1 = (int*)x;
    int * val2 = (int*)y;
    return *val1 > *val2 ? 1 : -1;
}

int compare_char(void * x, void * y)
{
    char * ch1 = (char*)x;
    char * ch2 = (char*)y;
    return *ch1 > *ch2 ? 1 : -1;
}

int compare_string(void *x, void * y)
{
 	char * ch1 = (char *) x ;
 	char * ch2 = (char *) y ;
	return strcmp(ch1,ch2) ;
}

