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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}


/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return -1 if not successful
 *         the maximum value of a dataset if successful
 */
char find_maximum(unsigned char* p_dataset, unsigned int length) {
 if(p_dataset == NULL || length <= 0) {
  return -1;
 }
 
 char max = 0;
 
 for(char i = 0 ; i < length ; i++) {
  if(p_dataset[i] > max) {
   max = p_dataset[i]
  }
 }
 
 return max;
}

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return -1 if not successful
 *         the minimum value of a dataset if successful
 */
char find_minimum(unsigned char* p_dataset, unsigned int length) {
 if(p_dataset == NULL || length <= 0) {
  return -1;
 }
 
 char min = p_dataset[0];
 
 for(char i = 1 ; i < length ; i++) {
  if(p_dataset[i] < min) {
   min = p_dataset[i]
  }
 }
 
 return min;
}

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return -1 if not successful
 *         the median value of a dataset if successful
 */
char find_median(unsigned char* p_dataset, unsigned int length)
{
 if(p_dataset == NULL || length <= 0) {
  return -1;
 }
 
 sort_array(p_dataset,length);
 if(length % 2 == 0)
 {
  return (p_dataset[length/2] + p_dataset[(length/2) - 1]) / 2; 
 }else{
  return p_dataset[length/2];
 }
}

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return -1 if not successfully
 *	   pointer to char array after sorting if successfully
 */
unsigned char* sort_array(unsigned char* p_dataset, unsigned int length)
{
 if(p_dataset == NULL || length <= 0) {
  return -1;
 }
 
 char temp;
 
 for(unsigned int i = 0; i < length; i++)
 {
  for(unsigned int j = 1; j < length; j++)
  {
   if(p_dataset[i] < p_dataset[j])
   {
    p_dataset[i] = temp;
    p_dataset[i] = p_dataset[j];
    p_dataset[j] = temp;
   }
  }
 }
 
 return p_dataset;
}

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return -1 if not successfully
 *	    the mean value of a dataset if successfully
 */
char find_mean(unsigned char* p_dataset, unsigned int length)
{
 unsigned int sum = 0;
 
 for(unsigned int i = 0; i < length; i++)
 {
  sum = sum + p_dataset[i];
 }
 
 return sum/length;
}

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return void 
 */
void print_array(unsigned char* p_dataset, unsigned int length)
{
 printf("test[%d] = {", length);
 for(unsigned int i = 0 ;i < length - 1; i++)
 {
  printf("%d, ", p_dataset[i]);
 }
 printf("%d }",p_dataset[length - 1]);
}

/**
 * @brief A function that prints the statistics of an array	 including minimum, maximum, mean, and median.
 *
 * @param p_dataset A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return void 
 */
void print_statistics(unsigned char* p_dataset, unsigned int length)
{
 printf("minimum = %d\n",find_minimum(p_dataset,length));
 printf("maximum = %d\n",find_maximum(p_dataset,length));
 printf("mean = %d\n",find_mean(p_dataset,length));
 printf("median = %d\n",find_median(p_dataset,length)); 
}
