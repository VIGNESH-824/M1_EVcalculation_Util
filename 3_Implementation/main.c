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
#include <stdlib.h>


int main(){
    char input;
    printf("Welcome to the EV Calculator Utility a once stop solution for you EV needs!!!\n");
    printf("\nFor the best performing EV vehicle you can use the components mentioned here\n");
    printf("Do you wish to continue?(y/n):");
    scanf("%s", &input);
    display(input);

}