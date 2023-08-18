#include <iostream>
using namespace std;

int main(){

    /*
        Especiality  of array of characters is that it can be printed on the terminal directly.
        '\0' is special character called null terminator/character.
        We have to give null character at end of array. Doing otherwise will lead the executable print garbage characters along with initialized characters.
        A null terminated array is called c-string.
    */
  
    char name[] {'H','r','i','t','h','i','k','\0'}; // Initializing array of characters.

    // Printing array of characters with range based far loop.
    cout << "My name is " ;
    for (auto c :  name)
    {
        cout << c ;
    }
    cout << endl;

    // Change character of an array
    name[5] = 'e';

    cout << "My name is " ;
    for (auto c :  name)
    {
        cout << c ;
    }
    cout << endl;

    // Printing array of characters directly in the terminal.
    cout << "My name is " << name << endl;
    cout << "Size of array 'nmae' : " << size(name) << endl;

    // Another way to initialize an array
    char school[] {"BNMPC"}; // Easiest way to initialize a c-string without null termination (recommanded)

    cout << "My school is " << school << endl;

    // Array bound
    int num1to5[] {1,2,3,4,5};
    cout << "Num 1 to 10 : " << num1to5 << endl; // We cannot directly print array of other datatypes.

    return 0; 
    
}