// AUTHOR: Anthony James Humphreys
// FILENAME: Lab2.cpp
// SPECIFICATION: This program is an orbital speed calculator, for the user to input the altidude and to output the speed of the satellite. 
// FOR: CS 1412 Programming Principles 2 Section 504


// 1. Write two use cases (usage scenarios) of Recursion.

	//The two cases when you use Recursion is when you reached the end of a calculation and need to reurn the final value or the equation
	// and the second is when you have to call the function more than once. 
	
// 2. Change the following recursion function into a loop.


#include <stdio.h>
#include <math.h>

	int main(){
		printf("%s\n", "recursion=");
		A(10);
		
		printf("%s\n", "loop=");
		
		int x;
		for (x = 10; x >= 0; x = x-1){
			printf("%d\n", x);
		}
		return (0);
	}
		
	int A(int x) {
		if (x<0)
		{
			return 0;
		}
		printf("%d\n",x);
		return A(x-1);
	}

// 3. Write a program that prints out the fibonacci numbers for a given n. In mathematical
// terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation:
// Fn = Fn-1 + Fn-2

// The program should take n as input from the user. Please use recursion in your program.

// Example:
// Input: Enter the number of terms (n): 10
// Output: Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

#include<stdio.h> 

int fib(int num) { 
   if (num <= 1) 
      return num; 
   return fib(num-1) + fib(num-2); 
} 
  
int main () { 
  int num = 10; 
  printf("%d", fib(num)); 
  getchar(); 
  return 0; 
} 

