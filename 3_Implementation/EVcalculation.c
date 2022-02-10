/**
 * @file EVcalculation.c
 * @author VIGNESH BHAT (vigneshb824@gmail.com)
 * @brief This file consists of the auxiliary functions 
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "EVstruct.h"
#include "EVcalculation.h"

/* This function takes the user defined input list number 
    and defines the total number of battery required in Series
    and Parallel for the battery pack */
battery_value req_value(int list_num, float voltage, float current){

    battery_value total_cell = {0,0};

    if(list_num == 1){
        /* The selected battery is Samsung 18650 lithium ion NMC cells */
        
        total_cell.series = (int)(voltage/4.2);
        total_cell.parallel = (int)(current/2.6);
    }
    else if(list_num == 2){
        /* The selected battery is Molicel 21700 lithium ion NCA cells */
        total_cell.series = (int)(voltage/4.2);
        total_cell.parallel = (int)(current/4.2);
    }

    /* Provision for expanding the number of choices for cells
    else if(list_num == <Additional number>){
        total_cell.series = (voltage/<Nominal Voltage Value of one cell>);
        total_cell.parallel = (current/<1C Discharge value of one cell>);
    } 
    */
    return(total_cell);
}

/* This function calculates and return the value of the required torque and
    RPM of the function using the maximum force and tyre radius provided by the user*/
vehicle_param vehicle_param1(int kerb_weight, int roll_res, int front_area, int vel_des, int acc_des, int tyre_rad, int Cd){
    float F_tot;
    float F_aero = (1/2)*front_area*Cd*1.225*(vel_des)*(vel_des);
    float gross_weight = kerb_weight*9.81;
    float F_roll = 0.015*gross_weight;
    float F_acc = kerb_weight*acc_des;

    F_tot = F_aero + F_roll + F_acc;
    
    vehicle_param vehicle_param2 = {0,0};

    vehicle_param2.torque = F_tot*tyre_rad;
    vehicle_param2.RPM = vel_des*tyre_rad;
    return(vehicle_param2);
}

enum status display(char* input){
    if((input == "Y") || (input = "y")){
        printf("The option for batteries are:\n1. Samsung Lithium ion (18650)\tV = 4.2V I = 2.8Ah\t350 per cell\n2. Molicel Lithium ion (21700)\tV = 4.2V I = 4.2Ah\t700 per cell\n");
        printf("The option for Motors are:\n1. Saietta 119R\tPermanent Magnet DC Motor\n2. Emrax 228\tPermanent Magnet Synchronous Motor");
        success;
    }
    else if((input == "N") || (input = "n")){
        error;
        exit(0);
    }
}

electrical_param electrical_param1(vehicle_param val, int motor_num){
    float torque_const;
    float rpm_const;
    if(motor_num == 1){
        torque_const = 0.2;
        rpm_const = 9;
    }
    else if(motor_num == 2){
        torque_const = 0.75;
        rpm_const = 11;
    }
    else{
        printf("Invalid Input");
    }

    electrical_param electrical_param2 = {0,0};

    electrical_param2.req_curr = val.torque/torque_const;
    electrical_param2.req_volt = val.RPM/rpm_const;
    return(electrical_param2);
}