/*  File: Lab1
 *  Author: jim ( jimgreekgamerYT )
 *
 *  Created on October 12, 2022
 *
 *  A program that prints the address of variables and sizes ( in bytes ) of variable types
 */

#include <stdio.h>

int main() {

  unsigned int intVar1, intVar2;

  printf("Print addresses of variables and values without initialization\n");
  printf("Address of variables 'intVar1' is :%p and the value is: %u\n", &intVar1, intVar1 );
  printf("Address of variables 'intVar2' is :%p and the value is: %u\n", &intVar2, intVar2 );

  intVar1 = 1;
  intVar2 = 2;

  printf("\nPrint the addresses of the variables and their values after initialization\n");
  printf("Address of the variable 'intVar1' is:%p and value is: %u\n", &intVar1, intVar1 );
  printf("Address of the variable 'intVar2' is:%p and value is: %u\n", &intVar2, intVar2);

  printf("\nA char is %u bytes", sizeof(char));
  printf("\nA int is %u bytes", sizeof(int));
  printf("\nA short is %u bytes", sizeof(short));
  printf("\nA long is %u bytes", sizeof(long));
  printf("\nA long long is %u bytes", sizeof(long long));
  printf("\nA float is %u bytes", sizeof(float));
  printf("\nA double is %u bytes", sizeof(double));

  printf("\n");
  return 0;
  }
