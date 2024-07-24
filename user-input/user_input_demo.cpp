#include <iostream>
using namespace std;
int main(){
    // what we want to do?
    /*
    user input
    storage space -> variable
    syntax
    cin >> variable_name;
    ex
    int number;
    cin >> number;
    */
   int number = 0;
   
   //cout << "Number before input from user = " << number;
   /*
   if I want to take input from user,
   I have to inform the user for input,
    this is know as prompt, prompt means cout the message
   */
    cout << "Enter an integer value" << "\n";
    cin >> number;
    cout << "Hello world" << "\n";
   return 0;

}