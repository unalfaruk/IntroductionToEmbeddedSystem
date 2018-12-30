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
 * @file <stats.c>
 * @brief <It is the first assesment of the embedded programming coourse.>
 *
 * <Add Extended Description Here>
 *
 * @author <A. Faruk UNAL>
 * @date <12/30/2018>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


 /**
 * @brief <To return the all elements of the array.>
 *
 * <This function prints all elements of the array.>
 *
 * @param <ptrOfArray> <The reference for the array>
 * @param <lengthOfArray> <The length for the array>
 *
 * @return <All elements of the araay are returned.>
 */
void print_array(unsigned char * ptrOfArray, unsigned int lengthOfArray);


/**
 * @brief <To return the maximum value of the array.>
 *
 * <This function scans all elements of the array, compares them each other and returns the maximum value.>
 *
 * @param <ptrOfArray> <The reference for the array>
 * @param <lengthOfArray> <The length for the array>
 *
 * @return <The maximum value are returned as an unsigned integer.>
 */
unsigned char * find_maximum(unsigned char * ptrOfArray, unsigned int lengthOfArray);


/**
* @brief <To return the minimum value of the array.>
*
* <This function scans all elements of the array, compares them each other and returns the minimum value.>
*
* @param <ptrOfArray> <The reference for the array>
* @param <lengthOfArray> <The length for the array>
*
* @return <The minimum value are returned as an unsigned integer.>
*/
unsigned char * find_minimum(unsigned char * ptrOfArray, unsigned int lengthOfArray);


/**
* @brief <To return the mean value of the array.>
*
* <This function scans all elements of the array, sums all of them and divide the total value by element numbers, then returns the mean value.>
*
* @param <ptrOfArray> <The reference for the array>
* @param <lengthOfArray> <The length for the array>
*
* @return <The mean value are returned as an unsigned integer.>
*/
unsigned char * find_mean(unsigned char * ptrOfArray, unsigned int lengthOfArray);


/**
* @brief <To sort the elements of the array.>
*
* <This function sorts all elements of the array from largest to smallest.>
*
* @param <ptrOfArray> <The reference for the array>
* @param <lengthOfArray> <The length for the array>
*
* @return <All elements are returned in order.>
*/
unsigned char * sort_array(unsigned char * ptrOfArray, unsigned int lengthOfArray);


/**
* @brief <To return the median value of the array.>
*
* <This function sorts the array and finds the middle element.>
*
* @param <ptrOfArray> <The reference for the array>
* @param <lengthOfArray> <The length for the array>
*
* @return <The median value are returned as an unsigned integer.>
*/
unsigned char * find_mean(unsigned char * ptrOfArray, unsigned int lengthOfArray);


/**
* @brief <To return the median value of the array.>
*
* <This function sorts the array and finds the middle element.>
*
* @param <ptrOfArray> <The reference for the array>
* @param <lengthOfArray> <The length for the array>
*
* @return <The median value are returned as an unsigned integer.>
*/
unsigned char * find_median(unsigned char * ptrOfArray, unsigned int lengthOfArray);


/**
* @brief <To return the all information about the array like median, mean, maximum and minimum value.>
*
* <This function runs all other functions to show information about the array.>
*
* @param <ptrOfArray> <The reference for the array>
* @param <lengthOfArray> <The length for the array>
*
* @return <The outputs of all other functions returned.>
*/
void print_statistics(unsigned char * ptrOfArray, unsigned int lengthOfArray);

#endif /* __STATS_H__ */
