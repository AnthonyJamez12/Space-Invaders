#include <stdio.h>
#include <stdlib.h>

void main()
{
	char file_name[50], character;
	FILE *file_pointer_1, *file_pointer_2;


	printf("Print the file name of the text file to encrypt: ");
	scanf("%s", file_name);	


	file_pointer_1 = fopen(file_name, "r");
	if(file_pointer_1 == NULL){
		printf("ERROR");
		exit(1);
	}
	file_pointer_2 = fopen("test.txt", "w");
	if(file_pointer_2 == NULL){
		printf("ERROR");
		fclose(file_pointer_1);
		exit(2);
	}
	while(1){
		character = fgetc(file_pointer_1);
		if(character == EOF){
			break;
		}
		else{
			character = character + 20;
			fputc(character, file_pointer_2);
		}
	}
	fclose(file_pointer_1);
	fclose(file_pointer_2);
	
	
	
	file_pointer_2 = fopen("test.txt", "r");
	if(file_pointer_2 == NULL){
		printf("ERROR");
		fclose(file_pointer_1);
		exit(4);
	}
	file_pointer_1 = fopen(file_name, "w");
	if(file_pointer_1 == NULL){
		printf("ERROR");
		exit(3);
	}
	while(1){
		character = fgetc(file_pointer_2);
		if(character == EOF){
			break;
		}
		else{
			fputc(character, file_pointer_1);
		}
	}
	printf("The file %s encrypted\n\n", file_name);
	fclose(file_pointer_1);
	fclose(file_pointer_2);
	

	

	printf("Print the file name of the text file to decrypt: ");
	scanf("%s", file_name);	

	file_pointer_2 = fopen("test.txt", "r");
	if(file_pointer_2 == NULL){
		printf("ERROR");
		fclose(file_pointer_1);
		exit(9);
	}
	file_pointer_1 = fopen(file_name, "w");
	if(file_pointer_1 == NULL){
		printf("ERROR");
		exit(7);
	}
	while(1){
		character = fgetc(file_pointer_2);
		if(character == EOF){
			break;
		}
		else{
			character = character - 20;
			fputc(character, file_pointer_1);
		}
	}
	printf("The file %s decrypted\n", file_name);
	fclose(file_pointer_1);
	fclose(file_pointer_2);
}


