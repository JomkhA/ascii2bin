/********************************/
/* Program Name: ascii2bin      */
/* Author:Akkharaw Jom.         */
/* Date: 2/25/2021              */
/********************************/
/* Description:                 */
/* Validation Checks:           */
/* Enhancements:                */
/********************************/

#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <math.h>

#define maxint (32)

int main (int argc, char * argv[], char ** envp) {

  char string[maxint];
  read(0, &string, maxint);
  printf("%s", string); // CHECK IF IT MATCHES BINARY STRING
  int length = 0;

  for (int x = 0; x < maxint; x++) {
    if (string[x] == '0' || string[x] == '1') {
      length++;
    }
    else {
      break;
    }
  }

  printf("%d\n", length); // CHECK LENGTH

  int number;
  int index = length - 1;

  for (int x = 0; x < length; x++) {
    if (string[x] = '1') {
      number = number + pow(2, index);
      index--;
    }
    if (string[x] = '0') {
      index--;
    }
  }

  printf("Number = %d", number);


  //char string[10];
  //int strlength = strlen(string);
  //printf("Length = %d" + strlength);
  //printf("String:" + (char) * string);

  //int ascii_value;
  //int offset = 48;
  //int number = 0;
  //int retval = read(0, &ascii_value, 1);

  //while (retval == 1) {
      //int digit = ascii_value - offset;
      //number = number << 1 + digit;  
      //retval = read(0, &ascii_value, 1);
  //}
        
  //printf("%d\n", number);

  //if (checksum != complement) {
    //fprintf(stderr, "Error Detected!\n"); 
    //return 1;
  //}
  //return 0;
}