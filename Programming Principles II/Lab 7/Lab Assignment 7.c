// AUTHOR: Anthony James Humphreys
// FILENAME: Lab Assignment 7.c
// SPECIFICATION: An assigmnent that ask questions
// FOR: CS 1412 Programming Principles 2 Section 504


// 1. How a struct could be used to show which field in a union is being used?

//    Answer.
//       A struct to show which field in a union is being used is not possible unless you create your own tag. 



// 2. Members of a union are accessed as ________________.
//    A. union-name.member
//    B. union-pointer->member
//    C. Both a & b
//    D. None of the mentioned

//    Answer.
//       C. Both a & b



// 3. Write a program where you declare and initialize an array of 10 student_t structures and write
//    a code segment that displays on separate lines the names (last name, first name) and ID of all
//    the students in the list.

#include <stdio.h>
int main()
{
    char *firstname[51] = {"Anthony", "Matthew", "Ricardo", "Seth", "Reed", "Joseph", "Connor", "Jose", "Caine", "Angelo"}
	, *lastname[51] = {"Humphreys", "Roseland", "Hinijose", "Dietz", "Lyons", "Morgan", "Ellis", "Najar", "Lagrange", "Mahler"};
    int id[10] = {11111, 11112, 11113, 11114, 11115, 11116, 11117, 11118, 11119, 11120}, number_of_elements = 10, i;


for(i=0; i < number_of_elements; i++){
        printf("\n%s \n", firstname[i]);
        printf("%s \n", lastname[i]);
        printf("%d \n", id[i]);
        
}

    return 0;
}
