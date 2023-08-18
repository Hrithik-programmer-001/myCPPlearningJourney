#include <iostream>
using namespace std;

int main(){
  
    int number1 = 71;
    int number2 = 3;
    int result;

    //Addition
    result = number1+number2;
    cout << "Addition: " << result << endl;

    //Subtraction
    result = number1-number2;
    cout << "Subtraction: " << result << endl;
    result = number2-number1;
    cout << "Subtraction(-) : " << result << endl;

    //Multiplication
    result = number1*number2;
    cout << "Multiplication: " << result << endl;

    //Division
    result = number1/number2;
    cout << "Division: " << result << endl;
    double resultFraction = number1/number2;
    cout << "Division: " << result << endl;

    //Modulus
    result = number1%number2;
    cout << "Modulus: " << result << endl;

    return 0;
        
}