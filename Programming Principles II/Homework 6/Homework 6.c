// AUTHOR: Anthony James Humphreys
// FILENAME: Lab6.c
// SPECIFICATION: This program is a 
// FOR: CS 1412 Programming Principles 2 Section 504

#include <stdio.h>
#include <string.h>


int main(){

	// Function that is called that tells if the word is a Palindrome or not
	pal("%s");
	
	return 0;
}

int pal()
{
	// The variable that takes in the input of the user
	char string[4];
	
	// Output and Input of program
	printf("Type a word: ", string);
	scanf("%s", string);
	
	//Variables that will be used to check the beggining characters of the string and the end characters of the string 
	int left_original = 0;
	int right_new = strlen(string) - 1;
	
	// Checks if the words is a Palindrome or not by going by each character of the old and new string 
	while(right_new>1){
		if(string[left_original ++] != string[right_new --]){
			printf("No");
			return;
		}
	}
	printf("Yes");

}

