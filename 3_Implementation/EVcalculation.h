/**
 * @file EVcalculation.h
 * @author VIGNESH BHAT (vigneshb824@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef EVCALCULATION_H
#define EVCALCULATION_H

#include <stdio.h>
#include "EVstruct.h"
#include <stdlib.h>

battery_value req_value(int list_num, int voltage, int current);

vehicle_param vehicle_param1(int kerb_weight, int roll_res, int front_area, int vel_des, int acc_des, int tyre_rad, int Cd);

enum status display(char* input);

electrical_param electrical_param1(vehicle_param val, int motor_num);
#endif