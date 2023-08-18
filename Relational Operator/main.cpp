#include <iostream>
using namespace std;

int main(){
  
    int number1 {23};
    int number2 {36};
    
    cout << "Number 1 : " << number1 << endl;
    cout << "Number 2 : " << number2 << endl;

    cout << endl;
    cout << "============= Comparing Variables =============" << endl;
    cout << endl;

    cout << boolalpha; // Prints true/false instead of 1/0

    // We have to use () to ignore errors [Precedence Error between '<<' and relational operator]

    cout << " Number1 < Number2 : " << (number1 < number2) << endl;
    cout << " Number1 <= Number2 : " << (number1 <= number2) << endl;
    cout << " Number1 > Number2 : " << (number1 > number2) << endl;
    cout << " Number1 >= Number2 : " << (number1 >= number2) << endl;
    cout << " Number1 == Number2 : " << (number1 == number2) << endl;
    cout << " Number1 != Number2 : " << (number1 != number2) << endl;

    cout << endl;
    cout << "_______ We can also store comparison result in a variable _______" << endl;
    cout << endl;

    auto result = (number1 != number2); // bool result = (number1 != number2);

    cout << number1 << " != " << number2 << " : " << result << endl;


    return 0; 
    
}