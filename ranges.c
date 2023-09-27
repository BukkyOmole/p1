#include <stdio.h>

// prototypes
void printCharRange();
void printShortRange();
void printIntRange();
void printLongRange();
void printFloatRange();
void printDoubleRange();


char *userInput = NULL;
size_t input_length = 0;
char type = ' ' ;
int loop = 1;


//getting user input
while((read = getline(&userInput, & input_length, stdin) != -1)){

    // sscanf reads the string and assigns the values to the specified variables
    fprintf(stdout, "Enter c|s|i|l|f|d <cntl+D to exit>:\n");

    sscanf(userInput, "%s", &type);

    // depending on what value sscanf reads for the data type the corresponding method for printing will be called
    switch(type){
        case 'c': 
            printCharRange(); 
            break;
        case 's':
            printShortRange(); 
            break;
        case 'i': 
            printIntRange(); 
            break;
        case 'l': 
            printLongRange();
            break;
        case 'f': 
            printFloatRange();
            break;
        case 'd': 
            printDoubleRange();
            break;
        default: // prints error message if appropriate data type is not entered
            fprintf(stderr, "Not a vaild data type\n"); 
            break;
    }
    fprintf(stdout, "Enter c|s|i|l|f|d <cntl+D to exit>:\n");
}

// the functions below print the ranges of the data types specified in their names
void printCharRange(){
    // signed char
    printf("The maximum value of a signed char = %d\n", );
    printf("The minimum value of a signed char = %d\n", ); //the minimum is just a negation of the maximum
    // unsigned char
    printf("The maximum value of an unsigned char = %d\n", ); 
    printf("The minimum value of an unsigned char = %d\n", ); 
}

void printShortRange(){
     // signed char
    printf("The maximum value of a signed char = %d\n", );
    printf("The minimum value of a signed char = %d\n", ); //the minimum is just a negation of the maximum
    // unsigned char
    printf("The maximum value of an unsigned char = %d\n", ); 
    printf("The minimum value of an unsigned char = %d\n", ); 

}

void printIntRange(){
     // signed char
    printf("The maximum value of a signed char = %d\n", );
    printf("The minimum value of a signed char = %d\n", ); //the minimum is just a negation of the maximum
    // unsigned char
    printf("The maximum value of an unsigned char = %d\n", ); 
    printf("The minimum value of an unsigned char = %d\n", ); 

}

void printLongRange(){
     // signed char
    printf("The maximum value of a signed char = %d\n", );
    printf("The minimum value of a signed char = %d\n", ); //the minimum is just a negation of the maximum
    // unsigned char
    printf("The maximum value of an unsigned char = %d\n", ); 
    printf("The minimum value of an unsigned char = %d\n", ); 

}
void printFloatRange(){}  
void printDoubleRange(){}
