#include <iostream>
using namespace std;
int main(){
    int number1 = 100;
    int number2 = 50;
    cout << "Number 1 = " << number1 <<" and Number 2 = "
            << number2 << " before swapping" << "\n";
    //swaping by using a third variable
    int temp = number1;
    number1 = number2;
    number2 = temp;
    cout << "Number 1 = " << number1 <<" and Number 2 = "
            << number2 << " after swapping" << "\n";
    
}