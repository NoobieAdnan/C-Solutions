#ifndef _SORT_H
#define _SORT_H
#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubblesort (void *,size_t, size_t, int(*)(void *,void *)) ;

int compare_int (void *,void *) ;

int compare_char (void * ,void *) ;

int compare_string(void *, void *) ;

int readint() ;

char readchar() ;

void readstring(char *) ;


#endif
