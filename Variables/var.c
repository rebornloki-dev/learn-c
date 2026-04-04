#include <stdio.h>

int main(){
    /*variable = Allocated Space in memory to store a value. 
                We refer to a variable's name to access stored values.
                That variable now behaves as if it was the value it contains
                BUT we need to declare what type of data we are storing 
    */
    int x; //declaration
    x = 123;//initialisation
    int y = 321; //declaration + initialisation


    int age = 21; //integer 
    float gpa = 2.05; //floating point number aka number with a decimal point
    char grade = 'C'; //single character
    char name[] = "Axon"; //array of characters aka a word 

    printf("Hello %c")
    printf("You are %d years old",age);
    return 0;

}