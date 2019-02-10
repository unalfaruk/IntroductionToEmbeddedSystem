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
#ifndef __COURSE1_H__
#define __COURSE1_H__

 /**
 * @brief Call each funcs of the following funcs.
 *
 *
 *
 * @return Nothing.
 */
int8_t course1();


/**
* @brief Test atoi() and itoa()
*
* @return Nothing.
*/
int8_t test_data1();


/**
* @brief Test atoi() and itoa()
*
* @return Nothing.
*/
int8_t test_data2();


/**
* @brief Test non-overlapped memmove
*
* @return Nothing.
*/
int8_t test_memmove1();


/**
* @brief Test overlapped memmove where there is overlap of the end of destination and 
* start of the source regions.
*
* @return Nothing.
*/
int8_t test_memmove2();


/**
* @brief Test overlapped memmove where there is overlap of the end of destination and
* start of the source regions.
*
* @return Nothing.
*/
int8_t test_memmove3();


/**
* @brief Test memcopy.
*
* @return Nothing.
*/
int8_t test_memcopy();


/**
* @brief Test memset and memzero.
*
* @return Nothing.
*/
int8_t test_memset();


/**
* @brief Test reverse.
*
* @return Nothing.
*/
int8_t test_reverse();

#endif /* __PLATFORM_H__ */

