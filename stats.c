/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file  "stats.c"
 * @brief  This is the implementation file for the "stats.h" header file
 *         This file contains the entry point of the program and other functions
 *         to do statistical manipulation.
 * 
 * some functions called here include the following;
 *    1. main()
 *    2. print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *    3. print_array() -  Given an array of data and a length, prints the array to the screen
 *    4. find_median() - Given an array of data and a length, returns the median value
 *    5. find_mean() -  Given an array of data and a length, returns the mean
 *    6. find_maximum() -  Given an array of data and a length, returns the maximum
 *    7. find_minimum() -  Given an array of data and a length, returns the minimum
 *    8. sort_array() - Given an array of data and a length, sorts the array from largest to smallest.
 *
 *
 * @author Collins Emasi
 * @date 28th Sept 2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
								114, 88,   45,  76, 123,  87,  25,  23,
								200, 122, 150, 90,   92,  87, 177, 244,
								201,   6,  12,  60,   8,   2,   5,  67,
								  7,  87, 250, 230,  99,   3, 100,  90};

	/* Other Variable Declarations Go Here */
	unsigned int size = sizeof(test)/sizeof(test[0]);

	/* Printing of statistics */
	print_statistics(test, size);

	return 0;
}

/* Add other Implementation File Code Here */

double find_median(unsigned char * array, unsigned int size) {

}

double find_mean(unsigned char * array, unsigned int size) {

}

unsigned char find_maximum(unsigned char * array, unsigned int size) {

}

unsigned char find_minimum(unsigned char * array, unsigned int size) {

}

void sort_array(unsigned char * array, unsigned int size) {

}

void print_statistics(unsigned char * array, unsigned int size) {
 
}

void print_array(unsigned char * array, unsigned int size) {

}
