// AUTHOR: Anthony James Humphreys
// FILENAME: Homework 11.c
// SPECIFICATION: The purpose of the program is to have a registration program that helps kids add and drop classes
// FOR: CS 1412 Programming Principles 2 Section 504


#include <stdio.h>
#include <stdlib.h>

// A struct to create the variable Course
struct Course {
	char course_name[10];
	int course_section;
	int course_credits;
	
	struct Course *next;
};

// A struct to create the variable Course
struct Student{
	int student_id; 
	
	struct Course* course; 
	struct Student* next; 
};



//A function that adds courses to schedule
void addCourse(struct Student **s, int student_id, struct Course* tmp){
	struct Student *last = *s;
  
	while(last!=NULL && last->student_id != student_id)
	last = last->next;

	if(last == NULL)
		return;
  
	if(last->course == NULL){	
		last->course = tmp;
		return;
	}
  
	struct Course* c = last->course;
	while(c->next != NULL)
	c = c->next;
  
	c->next = tmp;
}



int compare(char name[], char cname[]){
	int i;
	for(i=0; i<6; i++)
	{
		if(name[i]!=cname[i])
			return 0;
	}
	return 1;
}


// A function that dops courses from the schedule 
void dropCourse(struct Student **s, int student_id, char cname[]){
	if(*s == NULL)
		return;
  

	struct Student *last = *s;
	while(last!=NULL && last->student_id != student_id)
		last = last->next;
  

	if(last==NULL || last->course == NULL)
		return;
  
	struct Course* c = last->course, *prev = NULL;
  

	while(c->next != NULL && !compare(c->course_name, cname))
	{
		prev = c;
		c = c->next;
	}
	if(prev == NULL)
		last->course = c->next;
	else
		prev->next = c->next;
}




void printS(struct Student* s){

	while(s!=NULL)
	{	
		printf("Student id: %d\n", s->student_id);
		struct Course* c = s->course;
		while(c!=NULL)
		{
			printf("%s %d %d\n", c->course_name, c->course_section, c->course_credits);
			c = c->next;
		}
		s = s->next;
	}
}



// Main function that runs the program. Such as the menu shy
int main(){
	int choice, n, i, j, id, course_section, course_credits;
	struct Student *s = NULL;
	char cname[6];
  
	while(1){
  

	printf("Menu\n");
	printf("0 - Exit\n");
	printf("1 - Add Course\n");
	printf("2 - Drop Course\n");
	printf("3 - Create initial schedule for student\n");
	printf("Enter choice: ");
	scanf("%d", &choice);
  
  
  
	if(choice == 0)
		break;
  



	if(choice == 1){
		printf("Enter student id: ");
		scanf("%d", &id);
		printf("Enter course name, section and credits:\n");
		scanf("%s%d%d", cname, &course_section, &course_credits);
		struct Course* tmp = (struct Course*)malloc(sizeof(struct Course));
		for(j=0; j<6; j++)
			tmp->course_name[j] = cname[j];
			tmp->course_section = course_section;
			tmp->course_credits = course_credits;
			addCourse(&s, id, tmp);
	}
	
	else if(choice == 2){
		printf("Enter student id: ");
		scanf("%d", &id);
		printf("Enter course name to drop: ");
		scanf("%s", cname);
		dropCourse(&s, id, cname);
	}
	
	else if(choice == 3){
		printf("Enter student id: ");
		scanf("%d", &id);
		printf("Enter number of courses: ");
		scanf("%d", &n);
		printf("Enter course name, section and credits:\n");
		for(int i=1; i<=n; i++)
		{
			scanf("%s%d%d", cname, &course_section, &course_credits);
			struct Course* tmp = (struct Course*)malloc(sizeof(struct Course));
			for(j=0; j<6; j++)
			tmp->course_name[j] = cname[j];
			tmp->course_section = course_section;
			tmp->course_credits = course_credits;
			addCourse(&s, id, tmp);
		}
	}

	printS(s);
	}	
	return 0;
}
