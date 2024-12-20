/*
 * File: search.h
 * Description: This header file contains function declarations for searching
 *              and reading data from an address book. It includes prototypes 
 *              for functions that allow searching by different criteria 
 *              (name, email, phone, city) and reading the search data from 
 *              a file. It also includes necessary structures for handling 
 *              the address book data.
*/

#ifndef SEARCH_H
#define SEARCH_H

#include "read.h"  // Ensure that read.h is included

int search_data(add_book *array, read_info *read, int count);

int read_search_data(read_info *read, add_book *addbook, int option);


#endif
