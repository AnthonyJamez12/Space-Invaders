// AUTHOR: Anthony James Humphreys
// FILENAME: Lab4.c
// SPECIFICATION: This program asks the users to input an array of numbers then tells the user the unique numbers 
// FOR: CS 1412 Programming Principles 2 Section 504

#include <stdio.h>

int main(){

	// INPUT Param.: array, number, count
    int array[100],
	    number, 
		count=0;
	
	// INPUT Param.: i, j, k
    int i, 
	    j, 
		k;
    
    // PURPOSE: To tell the user the numbers that are not duplicates 
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d", &number);
       printf("Input %d elements in the array :\n", number);
       
       for(i=0; i < number; i++){
	      printf("element - %d : ", i);
	      scanf("%d", &array[i]);
	    }
	    
	    
    printf("\nThe unique elements found in the array are: \n");
    
    
    for(i=0; i < number; i++){
        count=0;
        for(j = 0, k = number; j < k+1; j++){
            if (i != j){
		       if(array[i] == array[j]){
                 count++;
               }
             }
        }
        
        // OUTPUT Param. The unique numbers
       if(count==0){
          printf("%d ", array[i]);
        }
    }
}

