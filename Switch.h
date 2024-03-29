// Switch.h
// This software to input from switches or buttons
// Runs on TM4C123
// Program written by: Nicholas Vadlamudi and Ishan Kumar
// Date Created: 3/6/17 
// Last Modified: 1/14/21
// Lab number: 10
// Hardware connections
// TO STUDENTS "REMOVE THIS LINE AND SPECIFY YOUR HARDWARE********
#ifndef _Switch_h
#define _Switch_h
#include <stdint.h>

// Header files contain the prototypes for public functions 
// this file explains what the module does
void Button_Init(void);

void GPIOPortC_Handler(void);

void GPIOPortE_Handler(void);

#endif

