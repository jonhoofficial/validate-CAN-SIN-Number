/*
Author: Jonathan Ho
Course: CSC209
Starter Code provided by Andrew Petersen
*/

/*
* Convert a 9 digit int to a 9 element int array.
*/
int populate_array(int sin, int *sin_array) {
  int sin_count = sin;
  int count = 0;
  // Check to see if integer is 9 digits
  while (sin_count != 0) {
    sin_count = sin_count / 10;
    count ++;
  }
  // Return 1 if integer digit is not 9
  if (count != 9) {
    return 1;
  }

  for (int i = 8; i >= 0; i--) {
    sin_array[i] = sin % 10;
    sin = sin / 10;
  }

  return 0;
}

/*
* Return 0 (true) iff the given sin_array is a valid SIN.
*/
int check_sin(int *sin_array) {

  if (sin_array[0] == 0) {
    return 1;
  }

  int sin_multiply[9] = {1,2,1,2,1,2,1,2,1}; // Used to multiply
  int sin_check[9]; //Used to check sin number validity
  int total = 0;
  int i;
  int sum = 0;
  int value = 0;

  for (i = 0; i < 9; i++) {
    sin_check[i] = sin_array[i] * sin_multiply[i];
    // If the multiplcation of the two values is larger than 9
    if (sin_check[i] > 9) {
      // Add the digits together
      value = 0;
      sum = 0;
      while (sin_check[i] != 0) {
        value = sin_check[i] % 10;
        sum = sum + value;
        sin_check[i] = sin_check[i] / 10;
      }
      sin_check[i] = sum;
    }
  }

  // Calculate the total sum
  for (i = 0; i < 9; i++) {
    total = total + sin_check[i];
  }

  // Check if total sum is divisible by 10
  if (total % 10 == 0) {
    return 0;
  }
  return 1;
}
