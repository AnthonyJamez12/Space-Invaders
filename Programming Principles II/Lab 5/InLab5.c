// AUTHOR: Anthony James Humphreys
// FILENAME: InLab 5
// SPECIFICATION: Answeromg questions
// FOR: CS 1412 Programming Principles 2 Section 504


// 1. For each of the following functions, explain its purpose, in one sentence
     // a. isupper
    // b. strlen
   // c. strcat
   
   
//   The function isupper returns true if the character argument is uppercase. The function
//   strlen calculates the length of a string up to but not including the terminating null 
//   character. The strcar allows memory block to be appended to another memory block.


//  2. Write a program in C to remove characters in a string except for alphabets.
     // Example:
    // Input: a2bc_d3ef.gh
   // Output: abcdefg
   
#include <stdio.h>
#include <string.h>


void main(){
    	
	char str[100];
    int a,b;
	
	printf("Input the string : ");
    fgets(str, sizeof str, stdin);	
    for(a=0; str[a]!='\0'; ++a){
        while (!((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z' || str[a] == '\0'))){
            for(b=a; str[b]!='\0'; ++b){
                str[b]= str[b+1];
            }
            str[b]='\0';
        }
    }
    printf("Output: %s\n\n",str);
}





//  3. Write a program in C to replace the spaces of a string with an underscore(_).
    // Example:
   // Input: the quick brown fox jumps over the lazy dog
  // Output: the_quick_brown_fox_jumps_over_the_lazy_dog
  
  
#include<stdio.h>
#include<ctype.h>

int main()
{
	int new_char;
	char under = '_';
	int ctr=0;
	char str[100];   
    printf(" Input a string : ");
	fgets(str, sizeof str, stdin); 
	while (str[ctr])
	{
		new_char=str[ctr];
		if (isspace(new_char)) 
		new_char= under;
		putchar (new_char);
		ctr++;
	}
	printf("\n\n");
	return 0;
}

