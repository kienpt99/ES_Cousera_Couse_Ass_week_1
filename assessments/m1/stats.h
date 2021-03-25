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
 * @file stats.h 
 * @brief Funtion declarations in order to performs statistical analytics on a dataset
 *
 * These funtion which find median, mean, maximum, minimum of a dataset and sort the dataset from largest to smallest.
 *
 * @author Kien Pham
 * @date 24/3/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array	 including minimum, maximum, mean, and median.
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return void 
 */
void print_statistics(unsigned char* p_dataset, unsigned int length);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return void 
 */
void print_array(unsigned char* p_dataset, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return the median value of a dataset  
 */
char find_median(unsigned char* p_dataset, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return the mean value of a dataset
 */
char find_mean(unsigned char* p_dataset, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return -1 if not successful
 *         the maximum value of a dataset if successful
 */
char find_maximum(unsigned char* p_dataset, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return -1 if not successful
 *         the minimum value of a dataset if successful
 */
char find_minimum(unsigned char* p_dataset, unsigned int length);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return pointer to char array after sorting.
 */
char* sort_array(unsigned char* p_dataset, unsigned int length);

#endif /* __STATS_H__ */
