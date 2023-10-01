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
 * @file  stats.h 
 * @brief This is the header file of the stats.c file. It contains
 * function declaration of the functions implemented in the 
 * stats.c file
 *
 *
 * @author Emasi Collins
 * @date 28th Sept 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Finds the median value of an unsinged char array
 * 
 * This function takes as input an unsinged char pointer and
 * an unsinged int array size. It then computes the median
 * of the array and returns the unsigned char
 * 
 * @param array Unsinged char pointer to the array for which
 *              the median value is calculated
 * @param size  unsigned int size of the array passed
 * 
 * @return The median value of the array.
*/
double find_median( unsigned char * array, unsigned int size);


/**
 * @brief Finds the mean value of an unsigned char array
 * 
 * Given an array of data and the length of the array. This
 * function calculates and returns the mean value of that
 * array
 * 
 * @param array Unsinged char pointer to the array for which
 *              the mean value is calculated
 * @param size  unsigned int size of the array passed
 * 
 * @return The mean value of the array.
*/
double find_mean( unsigned char * array, unsigned int size);


/**
 * @brief Finds the maximum value of an unsigned char array
 * 
 * Given an array of data and the length of the array. This
 * function finds and returns the maximum value in that array.
 * 
 * @param array Unsinged char pointer to the array for which
 *              the maximum value is calculated
 * @param size  unsigned int size of the array passed
 * 
 * @return The maximum value of the array.
*/
unsigned char find_maximum( unsigned char * array, unsigned int size);


/**
 * @brief Finds the minimum value of an unsigned char array
 * 
 * Given an array of data and the length of the array. This
 * function finds and returns the minimum value in that array.
 * 
 * @param array Unsinged char pointer to the array for which
 *              the minimum value is calculated
 * @param size  unsigned int size of the array passed
 * 
 * @return The minimum value of the array.
*/
unsigned char find_minimum( unsigned char * array, unsigned int size);

/**
 * @brief Sorts an array of unsigned characters in ascending order.
 *
 * Given an array of unsigned characters and its size, this function
 * sorts the elements of the array from largest to smallest (descending
 * order)
 *
 * @param array Unsigned char pointer to the array to be sorted.
 * @param size  The number of elements in the array.
 */
void sort_array(unsigned char * array, unsigned int size);

/**
 * @brief Prints the statistics of an array including
 *          - Minimum
 *          - Maximum
 *          - Mean and
 *          - Median
*/
void print_statistics();

/**
 * @brief Prints an array to the screen
 * 
 * Given an array of unsigned char and its size, this function
 * prints the array passed.
*/
void print_array( unsigned char * array, unsigned int size);

#endif /* __STATS_H__ */
