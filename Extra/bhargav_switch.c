/*C program to design calculator with basic operations using switch.*/
 
#include <stdio.h>
 
int main()
{
    float num1,num2;
    //float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    //result=0;
    switch(ch)    
    {
        case '+':
            
            printf("%f",num1+num1);
            break;
             
        case '-':
            printf("%f",num1-num2);
            break;
         
        case '*':
            printf("%f",num1*num2);
            break;
             
        case '/':
            
            printf("%f",num1/num2);
            break;
             
        
        default:
            printf("Invalid operation.\n");
    }
 

    return 0;
}