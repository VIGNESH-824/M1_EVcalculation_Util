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

battery_value req_value(int list_num, float voltage, float current);

vehicle_param vehicle_param1(float kerb_weight, float roll_res, float front_area, float vel_des, float acc_des, float tyre_rad, float Cd);

enum status display(char input);

electrical_param electrical_param1(vehicle_param val, int motor_num);

#endif