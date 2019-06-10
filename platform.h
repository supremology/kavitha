/*
 * platform.h
 *
 *  Created on: 10-Jun-2019
 *      Author: supremology
 */

#ifndef PLATFORM_H_
#define PLATFORM_H_

#define CPU_TYPE_64 unsigned char
//#define CPU_TYPE_32 unsigned char
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#define LSB_FIRST  1
#define HIGH_BYTE_FIRST 0
#define LOW_BYTE_FIRST 1
#define MSB_FIRST  1


typedef unsigned char       uint8;
typedef unsigned char       uint16;



#endif/* PLATFORM_H_ */
