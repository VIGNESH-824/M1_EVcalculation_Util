# These are the requirements of the whole program and is divided into High level and the corresponding Low Level reapectively
* HL1 - Calculate the Maximum wheel torque and Maximum wheel RPM of the Vehicle. 
* HL2 - Help in Selection of Motor and Batteries (Helps in finding the Torque and RPM constants).
* HL3 - Calculate the total batteries required for the desired performance.

# The consecutive Low Level requirements are as follows:
* HL1 - 
     * LL1 - Ask for the kerb weight, rolling ressistance and the frontal area of the vehicle.
     * LL2 - Ask for the desired speed and acceleration of the vehicle.
     * LL3 - Declare a function for computing the maximum torque using the Maximum force on the vehicle and the Rolling radius.
     * LL4 - Use the same function for computation for the vehicle RPM, using the desired velocity and the Rolling Radius.

* HL2 - 
     * LL1 - Display Multiple battery parameters for the required System
     * LL2 - Display the parameters of the motor as per the torque required&RPM by the user.

* HL3 - 
     * LL1 - Create a function which determines the total size of the battery pack.
     * LL2 - Find the configuration of series and parallel.