#include <iostream>
using namespace std;

int main(){

    // Braced Variable Intialization
    int num0;
    int num1 {};
    int num2 {5};
    int num3 {8};
    //int num {a + b}; #Compiler Error because it doesn't exist.
    int num4 {num2+num3};
    //int num5 {2.7}; #Compiler Error

    cout << "Num0 :- "<< num0 << endl;
    cout << "Num1 :- "<< num1 << endl;
    cout << "Num2 :- "<< num2 << endl;
    cout << "Num3 :- "<< num3 << endl; 
    //cout << "Num (Compiler Error) :- "<< num << endl;
    cout << "Num (2 + 3) :- "<< num4 << endl;
   //cout << "Num5 (Compiler Error) :- "<< num5 << endl;

    // Functional Variable Intialization
    int b;
    int b1 (); // Warning
    int b2 (5);
    int b3 (8);
    //int bb (x + y); #Compiler Error because it doesn't exist.
    int b4 (b2+b3);
    int b5 (2.7); // Information lost. The number will be chopped off to 2.
    
    cout << "B :- "<< b << endl;
    cout << "B1 :- "<< b1 << endl;
    cout << "B2 :- "<< b2 << endl;
    cout << "B3 :- "<< b3 << endl;
    //cout << "BB (Compiler Error) :- "<< bb << endl;
    cout << "B (2 + 3) :- "<< b4 << endl;
    cout << "B5 :- "<< b5 << endl;

    // Assignment Variable Intialization 
    int c1;
    int c2 = 5;
    int c3 = 8;
    //int cc = x + y; #Compiler Error because it doesn't exist.
    int c4 = c2+c3;
    int c5 = 2.7; // Information lost. The number will be chopped off to 2.

    cout << "C1 :- "<< c1 << endl;
    cout << "C2 :- "<< c2 << endl;
    cout << "C3 :- "<< c3 << endl;
    //cout << "CC (Compiler Error) :- "<< cc << endl;
    cout << "C (2 + 3) :- "<< c4 << endl;
    cout << "C :- "<< c5 << endl;

    return 0;
    
    
}