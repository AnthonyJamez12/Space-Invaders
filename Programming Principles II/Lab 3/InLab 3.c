//1. Let us assume,
i=5
j=6

	//a. What will be the value of i and j when the following line is executed?
		j = i++;
	//b. What will be the value of i and j when the following line was executed instead?
		j=++i;


//The value of example a. is 5 and the value of example b. 6.



//2. What will be the output of the following piece of code?
	int i = 1, j = 1;
	for(--i && j++ ; i<10; i+=2)
	{
		printf("loop ");
	}


//The output of the following        "          loop loop loop loop loop             "




//3. Explain the output of the following program.
	#include<stdio.h>
	int main(){
		int a = 130;
		char *ptr;
		ptr = (char *)&a;
		printf("%d ",*ptr);
		return 0;
	}
	
	
// The output is -126 and the variable ptr is a pointer that runs down memory bytes. 
