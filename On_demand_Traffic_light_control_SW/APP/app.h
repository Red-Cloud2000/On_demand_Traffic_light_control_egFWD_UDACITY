/******************************************************************************
 *
 * Module      : APP
 *
 * File Name   : app.h
 *
 * Description : Header file for the Application
 *
 * Author      : Abdelrahman Hesham
 *
 *******************************************************************************/


#ifndef APP_APP_H_
#define APP_APP_H_

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description : Function to start the program
 */
void app_start(void);

/*
 * Description : Function to be called when normal routine and also has the routine
 * 			     to happen when external interrupt by INT0
 */
void normal_mode(void);

#endif /* APP_APP_H_ */
