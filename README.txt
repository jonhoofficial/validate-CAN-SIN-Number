Starter code provided by:
- Andrew Petersen https://utmandrew.bitbucket.io/
- Ilir Dema https://www.utm.utoronto.ca/math-cs-stats/faculty-staff/dema-ilir

This was part of an assignment for CSC209: Software Tools and Systems Programming course at the University of Toronto Mississauga. 

Assignment Brief (Source: https://mcs.utm.utoronto.ca/~209/assignments/a2/a2.shtml)
You will write a C program called validate_sin.c that could be used to check whether a Canadian Social Insurance Number (SIN) is valid.

# Details
Your program reads a single command line argument representing a candidate SIN number. Your program then prints one of two messages to standard output: "Valid SIN", if the value given is a valid Canadian SIN number, or "Invalid SIN", if it is invalid.

# Requirements
For this assignment, you are required to write (and use) two helper functions. (These helper functions are to be implemented in the file sin_helpers.c. The main function is in validate_sin.c.) The first helper function is named populate_array. It takes an integer and an integer array as its arguments and returns an integer. This function's job is to populate the given integer array so that it contains the 9 digits of the given integer, in the same order as in the integer. (Hint: Use % 10 and / 10 to calculate 
the digits.) The function must return 0 when it completes successfully and 1 if the given integer is not 9 digits.

The second helper function is named check_sin, and it takes an 9 element integer array representing a candidate SIN number. It returns 0 if the number given is a valid Canadian SIN number, and 1 otherwise. Your function should implement the Luhn algorithm (a process for validating Canadian SIN numbers) to perform this task. The Luhn algorithm is outlined in this Wikipedia (https://en.wikipedia.org/wiki/Social_Insurance_Number#Validation) page.
Note: as a simplification, we will only consider numbers that begin with a non-zero digit to be valid. Therefore, numbers such as 046454286 and 000000026 are considered invalid.

# Command line arguments and return codes
For this program, you may assume that if exactly one command-line argument is provided, it will have the correct format of a candidate SIN number. If the user calls the program with too few or too many arguments, the program should not print anything, but should return from main with return code 1. Following the standard C conventions, main should return 0 when the program runs successfully.
