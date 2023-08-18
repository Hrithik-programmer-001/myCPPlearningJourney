#include <iostream>
using namespace std;

int main(){
  
    int a {68}; //Variable is declared and initialized with a value.
    cout << "Number a :- " << a << endl;

    a = 66; //The variable is intialized again by assignment initialization.
    cout << "Number a :- " << a << endl;

    cout << endl;

    //This method is applicable for all types variable too.
    double b {69.99};
    cout << "Number b :- " << b << endl;

    b = 96.66;
    cout << "Number b :- " << b << endl;

    cout << endl;
    
    bool c {true};
    cout << boolalpha;
    cout << "This is " << c << endl;

    c = false;
    cout << "This is " << c << endl;

    cout << endl;

    //WARNING : Be careful about this method when using AUTO type.
    
    auto d {675u}; // It is an unsigned integer.
    cout << "Number d :- " << d << endl;

    /* 
    According to auto,
    variable d is now an unsigned integer. 
    */

    d = -77; // -77 is not a unsigned integer.
    cout << "Number d :- " << d << endl; //We will not get our desired output.


    return a;

}