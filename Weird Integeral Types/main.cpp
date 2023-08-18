#include <iostream>
using namespace std;

int main(){
  
    short int num1 {89};
    short int num2 {23};

    char cha1 {20};
    char cha2 {50};

    cout << "The size of num1 is : " << sizeof(num1) << endl;
    cout << "The size of num2 is : " << sizeof(num2) << endl;
    cout << "The size of cha1 is : " << sizeof(cha1) << endl;
    cout << "The size of cha2 is : " << sizeof(cha2) << endl;
    
    cout << "The size of num1 + num2 is : " << sizeof(num1+num2) << endl;
    cout << "The size of char1 + char2 is : " << sizeof(num1+num2) << endl;

    /* 
     Basically if you try to do arthmetic operations on the types less than 4 bytes (char, short int), the result will automatically turned into the type of 4 bytes (int).
    */

    return 0; 
    
}