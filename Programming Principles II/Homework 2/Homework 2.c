// AUTHOR: Anthony James Humphreys
// FILENAME: Lab1.cpp
// SPECIFICATION: This program is a tip calculator, user inputs the numbers and program out puts the results.
// FOR: CS 1412 Programming Principles 2 Section 504




// 1) What will the following program will print?

//  #include <stdio.h>

//  int main(void) {
//	  int x =5;
//	  int y =7;
//	  int z =50;
	
//	  if (!(x < y && z > (z/x -y )) ){
//    	printf("Case 1\n");
//	  } else {
//	  	printf("Case 2\n");
//	   }
//	   return 0;
//   }


/////////////////////////////////              The following program will write "Case 2".           //////////////////////////////////////////////////



// 2) Write a program that asks the user to enter a temperature in Fahrenheit and convert the
//    temperature to Kelvin. You need to use functions for the calculation using the formula given
//    below. Print the results using a meaningful statement (see example).
//    Formula:
//    K = (F - 32) × 5/9 + 273.5
//    K represents the output in kelvin
//    F represents input in Farenheit
//    Sample input and output:
//    Input: Please enter the temperature in Fahrenheit: 100
//    Output: The temperature in Kelvin is 311.28.



#include <stdio.h>

int main(void){

	// INPUT Param.: kelvin, farenheit
	
	double kelvin, 
	       farenheit;
	
	
	// PURPOSE: Get usuers input
	printf("Please enter the temperature in Fahrenheit: ");
	scanf("%lf", &farenheit);
	
	kelvin = (farenheit - 32) * 5/9 + 273.5;
	
	
	// OUTPUT Param.: Temperature from fahrenheit to kelvin
	printf("The temperature in Kelvin is %.2f", kelvin);
	
	
	
	
	
	
}





















































