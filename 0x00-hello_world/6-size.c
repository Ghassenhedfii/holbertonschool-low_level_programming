#include <stdio.h>
/**
 *
 */
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    long int longinType;
    long long int longlongintType;
    char charType;
	 // sizeof evaluates the size of a variable
	 printf("Size of int: %zu bytes\n", sizeof(intType));
   	 printf("Size of float: %zu bytes\n", sizeof(floatType));
    	 printf("sizeof of long: %zu\n", sizeof(longintType));
   	 printf("Size of char: %zu byte\n", sizeof(charType));
         printf("size of long long: %zu byte\n", sizeof(longlongintType));
    return 0;
}