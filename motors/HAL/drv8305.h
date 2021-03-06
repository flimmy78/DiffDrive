//----------------------------------------------------------------------------------
//	FILE:			drv8305.h
//
//	Description:	Contains DRV8305.c declarations
//
//	Version: 		1.0
//
//  Target:  		TMS320F28377S
//
//----------------------------------------------------------------------------------
//  Copyright Texas Instruments � 2004-2015
//----------------------------------------------------------------------------------
//  Revision History:
//----------------------------------------------------------------------------------
//  Date	  | Description / Status
//----------------------------------------------------------------------------------
// 4 Nov 2015 - DRV8305.c declarations
//----------------------------------------------------------------------------------

#ifndef DUALMTRSERVO_377S_DRV8305_H_
#define DUALMTRSERVO_377S_DRV8305_H_

#include "motorVars.h"
#include "DRV830x_SPI.h"

/*****************************************************************************/
// function prototypes
/*****************************************************************************/
void InitDRV8305Regs(MOTOR_VARS * motor);
void InitDRV8305(MOTOR_VARS * motor);
void DRV8305_diagnostics (MOTOR_VARS * motor);

//=============================================================================

#endif /* DUALMTRSERVO_377S_DRV8305_H_ */
