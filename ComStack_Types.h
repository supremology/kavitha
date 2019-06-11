/*Communication Stack Types
 * ComStack_Types.h
 *
 *  Created on: 10-Jun-2019
 *      Author: supremology
 */
/* The communication stack header files */
#ifndef COMSTACK_TYPES_H_
#define COMSTACK_TYPES_H_


/* INCLUDES */
#include "ComStack_cfg.h"
#include "Std_Types.h"


/* GLOBAL DATA TYPES (ECU DEPEND)  */



typedef uint8 PduIdType ;                                /* ID OF PDU
                                                               ALLOW RANGE 8,16*/
typedef uint8 PduLengthType;                             /* LENGTH INFO OF PDU    */

/* GLOBAL DATA TYPES (ECU INDEPENDENT)*/


typedef struct                                             /* STORE THE BASIC INFORMATION ABOUT PDU*/
{
	uint8* SduDataPtr;                                     /* Pointer to the SDU */
	PduLengthType SduLength;                               /* Length of the SDU */


	}
PduInfoType;

typedef uint8 PNCHandleType;                             /*  Store the identifier of a partial network cluster */


typedef enum                                        /*Specify the parameter to which the value has to be changed (BS or STmin) */
{
	TP_STMIN=0x00 ,                                          /* Separation Time */
	TP_BS=0x01 ,                                            /* Block Size */
	TP_BC=0x02 ,                                            /* Band width control parameter */

}
TPParameterType ;

typedef enum                                          /*  Store the result of a buffer request*/
{
	BUFREQ_OK =0x00,                                       /*  Successful */
	BUFREQ_E_NOT_OK =0x01,                                 /* Not Successful*/
	BUFREQ_E_BUSY=0x02,                                   /*  Temporarily no buffer available */
	BUFREQ_E_OVFL=0x03,                                   /*  No Buffer of the required length can be provided */
}
BufReq_ReturnType ;


typedef enum                                         /* Store the state of TP buffer */
{
	TP_DATACONF =0x00,
	TP_DATARETRY =0x01,
	TP_CONFPENDING=0x02,
	}
TpDataStateType ;

typedef struct                                        /* Store the information about TP buffer handling. */
{
	TpDataStateType  TpDataState ;
	PduLengthType TxTpDataCnt;
}
RetryInfoType;



typedef enum                                          /*  The errors which can occur when activating or deactivating Pretended Networking*/
{
	ICOM_SWITCH_E_OK=0x00,
	ICOM_SWITCH_E_FAILED =0x01,

}IcomSwitch_ErrorType;

#endif /* COMSTACK_TYPES_H_ */
