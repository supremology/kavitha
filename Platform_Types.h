/*
 * platform.h
 *
 *  Created on: 10-Jun-2019
 *      Author: supremology
 */
/* The Platform Type header files */
#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#define CPU_TYPE_64                                      /* CPU TYPE*/
#define CPU_TYPE_32
#define CPU_TYPE_16
#define CPU_TYPE_8

#define MSB_FIRST  1                                    /* BIT ORDERING ((Register)*/
#define LSB_FIRST  1

#define HIGH_BYTE_FIRST 0                               /* Byte Ordering (Memory) */
#define LOW_BYTE_FIRST 1

#ifndef TRUE                                            /* Boolean */
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif


typedef unsigned char       uint8;    /* This standard AUTOSAR type shall be of 8 bit unsigned */
typedef unsigned char       uint16;  /* This standard AUTOSAR type shall be of 16 bit unsigned */



#endif/* PLATFORM_TYPES_H_ */
