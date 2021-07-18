// AUTHOR: Anthony James Humphreys
// FILENAME: Lab1.cpp
// SPECIFICATION: This program is a tip calculator, user inputs the numbers and program out puts the results.
// FOR: CS 1412 Programming Principles 2 Section 504


#include <stdio.h>
#define Percentage_Tip 0.00

main(void){
	
	// INPUT Param.: Bill, tip, number of people
	
	double bill, 
	       percentage_tip, 
		   tip_per_person, 
		   total_per_person;
		   
	int people,  tip;
	
	// PURPOSE: To make life easier for people 
	printf("Enter the bill: ");
	scanf("%lf", &bill);
	printf("Enter the percentage of the tip: ");
	scanf("%lf", &percentage_tip);
	printf("Enter the number of people: ", people);
	scanf("%d", &people);
	
	
	tip_per_person = ((bill * percentage_tip/ people)/100);
	total_per_person = (bill / people)+ tip_per_person ;
	
	
	// OUTPUT Param.: Tip per person and total for each person
	printf("Tip per person is $%.2f and total per person is $%.2f", tip_per_person, total_per_person);
	
	return(0);
	
}
