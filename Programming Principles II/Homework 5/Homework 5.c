// AUTHOR: Anthony James Humphreys
// FILENAME: Lab5.c
// SPECIFICATION: This program is an orbital speed calculator, for the user to input the altidude and to output the speed of the satellite. 
// FOR: CS 1412 Programming Principles 2 Section 504



#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define str_size 100 

void main()
{
    char str[str_size];
    int alp, digit, lower, upper, vowels, constants, i;
    alp = digit = lower = upper = vowels = constants = i = 0;
    
// INPUT Param.: A string

       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	

	// PURPOSE: To describe the detail of the string
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') && (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        else if(str[i]>= 'a' || str[i]<='e' || str[i]>= 'i' || str[i]<='o' || str[i]>= 'u')
        {
            vowels++;
        }
        else{
            constants++;
        }
        i++;
    }


	// OUTPUT Param.: Details of the statement
	
	
    printf("The total number of alphabets: %d\n", alp);
    printf("The total number of digits: %d\n", digit);
    printf("The total number of lower case alphabets: %d\n\n", lower);
    printf("The total number of upper case alphabets: %d\n\n", upper);
	printf("The total number of vowels: %d\n\n", vowels);
	printf("The total number of constants: %d\n\n", constants);
}
