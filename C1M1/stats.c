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

  printf("Default Array\n");
  print_array(test,SIZE);

  unsigned char max= find_maximum(test, SIZE);
  printf("Max= %d\n", max);

  unsigned char min = find_minimum(test, SIZE);
  printf("Min= %d\n", min);

  unsigned char mean = find_mean(test, SIZE);
  printf("Mean= %d\n", mean);

  unsigned char * sortedArray =sort_array(test, SIZE);
  printf("Sorted Array\n");
  print_array(sortedArray, SIZE);

  unsigned char median = find_median(sortedArray, SIZE);
  printf("Median= %d\n", median);

  printf("\n\tSTATISTICS of the ARRAY\n");
  print_statistics(test, SIZE);

  system("pause");

}

void print_array(unsigned char * ptrOfArray, unsigned int lengthOfArray) {
	for (int i = 0; i < lengthOfArray; i++) {
		printf("%d ", ptrOfArray[i]);
	}
	printf("\n");
}

unsigned char * find_maximum(unsigned char * ptrOfArray, unsigned int lengthOfArray) {
	int temp = ptrOfArray[0];
	
	for (int i = 1; i < lengthOfArray; i++) {
		if (temp < ptrOfArray[i]) {
			temp = ptrOfArray[i];
		}
	}
	return temp;
}

unsigned char * find_minimum(unsigned char * ptrOfArray, unsigned int lengthOfArray) {
	int temp =ptrOfArray[0];

	for (int i = 1; i < lengthOfArray; i++) {
		if (temp > ptrOfArray[i]) {
			temp = ptrOfArray[i];
		}
	}
	return temp;
}

unsigned char * find_mean(unsigned char * ptrOfArray, unsigned int lengthOfArray) {
	int sum = 0;

	for (int i = 0; i < lengthOfArray; i++) {
		sum += ptrOfArray[i];
	}
	return sum/lengthOfArray;
}

unsigned char * sort_array(unsigned char * ptrOfArray, unsigned int lengthOfArray) {
	int temp = 0;
	int tempIndex = 0;
	unsigned char tempArray[SIZE];
	static unsigned char sortedArray[SIZE];

	for (int i = 0; i < lengthOfArray; i++)
	{
		tempArray[i] = ptrOfArray[i];
	}

	for (int i = 0; i < lengthOfArray; i++)
	{
		for (int k = 0; k < lengthOfArray; k++) {
			if (temp < tempArray[k]) {
				temp = tempArray[k];
				tempIndex = k;
			}
		}
		tempArray[tempIndex] = 0;
		sortedArray[i] = temp;
		temp = 0;
	}

	return sortedArray;
}

unsigned char * find_median(unsigned char * ptrOfArray, unsigned int lengthOfArray) {
	return ptrOfArray[19];
}

void print_statistics(unsigned char * ptrOfArray, unsigned int lengthOfArray) {
	
	unsigned char max = find_maximum(ptrOfArray, SIZE);
	printf("Max= %d\n", max);

	unsigned char min = find_minimum(ptrOfArray, SIZE);
	printf("Min= %d\n", min);

	unsigned char mean = find_mean(ptrOfArray, SIZE);
	printf("Mean= %d\n", mean);

	unsigned char * sortedArray = sort_array(ptrOfArray, SIZE);
	//print_array(sortedArray, SIZE);

	unsigned char median = find_median(sortedArray, SIZE);
	printf("Median= %d\n", median);
}

/* Add other Implementation File Code Here */
