/**
 * @file main.c
 * @author VIGNESH BHAT (vigneshb824@gmail.com)
 * @brief This is the main function which contains the user defined input functions.
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "EVstruct.h"
#include "EVcalculation.h"
#include <stdlib.h>


int main(){
    char input;
    int bat, mot;
    printf("Welcome to the EV Calculator Utility a once stop solution for you EV needs!!!\n");
    printf("\nFor the best performing EV vehicle you can use the components mentioned here\n");
    printf("Do you wish to continue?(y/n):");
    
    scanf("%s", &input); 

    display(input); // Here we are promted to choose the battery and the motor
    printf("\nPlease enter the number mentioned in the list for your corresponding component:\n");
    scanf("%d %d",&bat, &mot);

    printf("Please enter your vehicle parameter:\n");
    float kerb_weight, roll_res, front_area, vel_des, acc_des, tyre_rad, Cd;
    printf("kerb weight = ");
    scanf("%f",&kerb_weight);
    printf("\nRolling Resistance = ");
    scanf("%f",&roll_res);
    printf("\nFrontal Area = ");
    scanf("%f",&front_area);
    printf("\nDesired Velocity = ");
    scanf("%f",&vel_des);
    printf("\nDesired Acceleration = ");
    scanf("%f",&acc_des);
    printf("\nTyre Radius = ");
    scanf("%f",&tyre_rad);
    printf("\nDrag Coefficient = ");
    scanf("%f",&Cd);
    printf("\n");

    vehicle_param my_vehicle_param = vehicle_param1(kerb_weight, roll_res, front_area, vel_des, acc_des, tyre_rad, Cd);
    /* my_vehicle_param.torque, my_vehicle_param.rpm */

    electrical_param my_electrical_param = electrical_param1(my_vehicle_param, mot);
    /* my_electrical_param.req_voltage,my_electrical_param.req_curr */

    battery_value my_battery_value = req_value(bat, my_electrical_param.req_volt, my_electrical_param.req_curr);
    /* my_battery_value.series,my_battery_value.parallel */

    float power_hp = (my_vehicle_param.torque * my_vehicle_param.RPM)/746;   //Output power of the vehicle in hp
    printf("The calculated Parameters of your Electric vehicle is as follows\n");
    printf("1. The torque of the given vehicle on wheels is: %.2f\n", my_vehicle_param.torque);
    printf("2. The RPM of the given vehicle on wheels is: %.2f\n", my_vehicle_param.RPM);
    printf("3. The required voltage from the battery pack is: %.2f\n",my_electrical_param.req_volt);
    printf("4. The required current from the battery pack is: %.2f\n",my_electrical_param.req_curr);
    printf("5. The number of selected batteries required in 'Series' are: %d\n",my_battery_value.series);
    printf("6. The number of selected batteries required in 'Parallel' are: %d\n",my_battery_value.parallel);
    printf("7. The power of the whole vehicle in hp: %.2f\n",power_hp);

    return 0;
}