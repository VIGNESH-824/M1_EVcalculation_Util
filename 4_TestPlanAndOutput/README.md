## The application gives the following outputs:
* O/P1 - Torque and RPM
* O/P2 - Voltage and Current
* O/P3 - No. of Batteries in Series and Parallel

###### For the given outputs the following test plan are to be followed
* Output 1 - 
    * TestPlan1 - input parameters - (250, 0.015, 1.3, 60, 8.3, 0.25, 0.9)
         * Expected Output - (1046.187500, 2292.000000)

    * TestPlan2 - input parameters - (260, 0.014, 2, 40, 10, 0.23, 0.9)
         * Expected Output - (930.037231, 1660.869507)
        
* Output 2 -
    * TestPlan1 - input parameters - ((2292.000000, 1046.187500), 1)
         * Expected Output - (2037.333374, 653.867188)
    
    * TestPlan2 - input parameters - ((2292.000000, 1046.187500),2)
         * Expected Output - (1660.869507,930.037231)

* Output 3 - 
    * TestPlan1 - input parameters - (1,120,50)
         * Expected Output - (28,19)

    * TestPlan2 - input parameters - (2,140,500)
         * Expected Output - (33, 119)

* Auxiliary Function - A function has been introduced to ask the user for an input to proceed with the calculation. But, if the user chooses 'N' or 'n' the code will throw an interrupt. 
