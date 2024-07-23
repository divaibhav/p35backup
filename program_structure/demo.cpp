//single line comment
/*
multi
line
comment
*/
// including hearder files
#include <iostream>
using namespace std;// namespace to seprate programming element
int main(){ // declaring main method/ function
            // main is required to execute the program
            // main is the starting point of execution

            // we can write programming statements in main;

    // output message
    cout << "This is an output message" 
        << "\n back slash n is used for line change" << "\n";

    // variable declaration
    // syntax
    // datatype variable_name;
    // datatypes available 
    //int ->integers
    // float --> fractional numbers,
    // double --> fractional number ,
    // bool --> boolean is used for true false or yes no
                // but represented as 1 or 0, 
    // char --> for representing characters
    int number;
    // after declaring an variable, we need to initialize it

    // now printing the value of variable in the output
    cout << number;

    // initializing a variable, after declaration
    // how a variable can be inititialized?
    // variable_name    = by a value(literal value);
    //                  = by some other variable;
    //                  = by some expression
    //                  = by calling someother function
    number = 40;
    int number2 = 56;
    number = number2;
    number2 = 98;

    //operations
    // operator
    // arithematic -> + , - , * , / , %

    // a + b * c / d
    int a = 10;
    int b = 20;
    int c = 10;
    int d = 5;
    int result = a + (b * (c / d));
    cout << "result = " << result;

    int remainder = 104 % 5;
    int number = 12345;
    int digit = number % 10;


}