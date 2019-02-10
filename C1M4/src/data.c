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
 * @file data.c
 * @brief Basic data manipulation
 *
 * @author Ahmet Faruk UNAL
 * @date 1/24/2019
 *
 */
#include "memory.h"
#include "platform.h"
#include "data.h"
#include <stdint.h>
#include <stdlib.h>

/***********************************************************
 Function Definitions
***********************************************************/
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base) {
	uint8_t sign = 1;
	uint8_t * beginPtr = ptr;

	if data < 0{
		sign = -1;
		data = -1 * data;
	}

	*(ptr++) = sign;
	do {		
		uint8_t tempRemainder = data % base;
		data = data / base;

		*(ptr++) = (tempRemainder>9) ? (tempRemainder-10)+ 'a' : tempRemainder +'0';
	} while (data > base);
	*(ptr) = '\0';

	return ptr - beginPtr;
}

uint8_t my_atoi(uint8_t * ptr, uint8_t digits,  uint32_t base) {
	int32_t data = 0;
	uint8_t sign = *ptr++;

	if data < 0{
		sign = -1;
		data = -1 * data;
	}

	while (digits >= 0) {
		data += (*(ptr++)-'0')*pow(base,--digit);
	}

	return sign*data;
}