/**
 * @file EVcalculation.h
 * @author VIGNESH BHAT (vigneshb824@gmail.com)
 * @brief This is a header file including all the function prototypes and declaration
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef EVSTRUCT_H
#define EVSTRUCT_H

#include <stdio.h>
#include <math.h>

typedef struct bat_val
{
    int series;
    int parallel;
}battery_value;

typedef struct v_p
{
    int RPM;
    int torque;
}vehicle_param;

enum status{error, success};

typedef struct e_p
{
    float req_volt;
    float req_curr;
}electrical_param;


#endif