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
* @file data.h
* @brief Data manipulation file.
*
*
* @author A. Faruk UNAL
* @date 1/23/2019
*
*/

#ifndef __DATA_H__
#define __DATA_H__

/**
* @brief Integer-to-ASCII
*
* Convert data from a standard integer type into an ASCII string.
*
* @param data Int32_t 
* @param ptr Pointer to converted character string
* @param base Uint32_t 2 to 16 base factor
*
* @return The lenght of the output.
*/

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base)

/**
* @brief ASCII-to-Integer 
*
* Convert data back from an ASCII represented string into an integer type.
*
* @param ptr Pointer to character string to convert
* @param digits Uint8_t the number of digits in your character
* @param base Uint32_t 2 to 16 base factor
*
* @return Converted 32-bit signed integer.
*/

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base)



#endif /* __MEMORY_H__ */