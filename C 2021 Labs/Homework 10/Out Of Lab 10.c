#include<stdio.h>
#include<string.h>
#include<math.h>


char a[100], character;
int summit = -1, 
	span, 
	i, 
	number_one, 
	number_two, 
	change, 
	answer, 
	stack[100];




int pop(){
    if(summit == -1)
     printf("Not enough in stack");
    else{
        return stack[summit--];
}}




void push(int character){
    if(summit == 99)
     printf("To much in stack");
    else
     stack[++summit] = character;
}






int main(){
    printf("Enter a postfix expression: ");
    gets(a);
    span = strlen(a);
  
    for(i=0; i < span; i++){
        character = a[i];
        
		if(character >= 48 && character <= 57)
         push(character-48);
         
        else if(character == '^' || character == '*' || character == '/' || character =='+' || character =='-'){
            switch(character){
                case '^':number_one = pop();
                         number_two = pop();
                         change = pow(number_two ,number_one);
                         push(change);
                         break;
                         
                case '*':number_one = pop();
                         number_two = pop();
                         change = number_two * number_one;
                         push(change);
                         break;
                         
                case '/':number_one = pop();
                         number_two = pop();
                         change = number_two / number_one;
                         push(change);
                         break;
                         
                case '+':number_one = pop();
                         number_two = pop();
                         change = number_two + number_one;
                         push(change);
                         break; 
                         
                case '-':number_one = pop();
                         number_two = pop();
                         change = number_two - number_one;
                         push(change);
                         break; 
                         
            }
        }
    }

    printf("The answer is = %d", stack[summit]);
}
