#include <iostream>
using namespace std;

int main(){
    
    /*
    Signed = value could be positive or negative
    Unsigned = value must  be positive
    Short = 2 bytes  
    int = 4 bytes  
    long = 4 or 8 bytes  
    long long = 8 bytes
    */  

    short num = 5;
    short int num1 = 2;
    signed short int num2 = -5;
    unsigned short int num3 = 20;

    cout << "Num :- "<< num << "; Size :- " << sizeof(num) << " Bytes" << endl;
    cout << "Num1 :- "<< num1 << "; Size :- " << sizeof(num1) << " Bytes" << endl;
    cout << "Num2 :- "<< num2 << "; Size :- " << sizeof(num2) << " Bytes" << endl;
    cout << "Num3 :- "<< num3 << "; Size :- " << sizeof(num3) << " Bytes" << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;

    int num4 = 9;
    signed int num5 = -10;
    unsigned int num6 = 33;

    cout << "Num4 :- "<< num4 << "; Size :- " << sizeof(num4) << " Bytes" << endl;
    cout << "Num5 :- "<< num5 << "; Size :- " << sizeof(num5) <<  " Bytes" << endl;
    cout << "Num6 :- "<< num6 << "; Size :- " << sizeof(num6) << " Bytes" << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;

    long num7 = 11;
    long int num8 = 13;
    signed long int num9 = -250000000;
    unsigned long int num10 = 21;

    cout << "Num7 :- "<< num7 << "; Size :- " << sizeof(num7) << " Bytes" << endl;
    cout << "Num8 :- "<< num8 << "; Size :- " << sizeof(num8) << " Bytes" << endl;
    cout << "Num9 :- "<< num9 << "; Size :- " << sizeof(num9) << " Bytes" << endl;
    cout << "Num10 :- "<< num10 << "; Size :- " << sizeof(num10) << " Bytes" << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;

    long long num11 = 12;
    long long int num12 = 23;
    signed long long int num13 = -100;
    unsigned long long int num14 = 27;

    cout << "Num11 :- "<< num11 << "; Size :- " << sizeof(num11) << " Bytes" << endl;
    cout << "Num12 :- "<< num12 << "; Size :- " << sizeof(num12) << " Bytes" << endl;
    cout << "Num13 :- "<< num13 << "; Size :- " << sizeof(num13) << " Bytes" << endl;
    cout << "Num14 :- "<< num14 << "; Size :- " << sizeof(num14) << " Bytes" << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;

    return 0;

}