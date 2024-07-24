/*WAP to accpet two values from user.
then calcluate remainder of the division of
value1 by value2
*/
#include <iostream>
using namespace std;
int main(){
    cout << "Enter an integer value for division" << "\n";
    int dividend = 0;
    cin >> dividend;
    cout << "Enter an integer value for division" << "\n";
    int divisor = 0;
    cin >> divisor;
    int remainder = dividend % divisor;
    cout << "Remainder = " << remainder << "\n";
}