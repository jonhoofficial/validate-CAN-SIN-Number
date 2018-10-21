/*
Author: Jonathan Ho
Course: CSC209
Starter Code provided by Andrew Petersen
*/


#include <stdio.h>
#include <stdlib.h>


int populate_array(int, int *);
int check_sin(int *);


int main(int argc, char **argv) {
    // If the number of inputted arguements is not 2 (./validate_sin [value])
    if (!(argc == 2)) {
      return 1;
    }

    // Store the inputted sin number
    int sin_number = atoi(argv[1]);
    int sin[9];
    int valid = 1;

    // Populate the sin array
    populate_array(sin_number, sin);

    // Obtain validity value
    valid = check_sin(sin);

    // SIN number is valid
    if (valid == 0) {
      printf("Valid SIN\n");
    }
    // SIN number is not valid
    else{
      printf("Invalid SIN\n");
    }


    return 0;
}
